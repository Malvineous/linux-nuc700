/*
 * arch/arm/mach-nuc700/clock.c
 *
 * Copyright (C) 2008 Nuvoton Technology Corporation
 * Wan ZongShun <mcuos.com@gmail.com>
 *
 * Copyright (C) 2013 Adam Nielsen <a.nielsen@shikadi.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/kernel.h>
#include <linux/clk.h>
#include <linux/spinlock.h>
#include <linux/io.h>
#include <mach/regs-gcr.h>
#include "clock.h"

static DEFINE_SPINLOCK(clocks_lock);

int clk_enable(struct clk *clk)
{
	unsigned long flags;

	spin_lock_irqsave(&clocks_lock, flags);
	if (clk->enabled++ == 0)
		(clk->enable)(clk, 1);
	spin_unlock_irqrestore(&clocks_lock, flags);

	return 0;
}
EXPORT_SYMBOL(clk_enable);

void clk_disable(struct clk *clk)
{
	unsigned long flags;

	if (clk->enabled == 0)
		return;
	spin_lock_irqsave(&clocks_lock, flags);
	if (--clk->enabled == 0)
		(clk->enable)(clk, 0);
	spin_unlock_irqrestore(&clocks_lock, flags);
}
EXPORT_SYMBOL(clk_disable);

unsigned long clk_get_rate(struct clk *clk)
{
	return 15000000;
}
EXPORT_SYMBOL(clk_get_rate);

void nuc700_clk_enable(struct clk *clk, int enable)
{
	unsigned int clocks = clk->cken;
	unsigned long clken;

	clken = __raw_readl(REG_CLKSEL);

	if (enable)
		clken |= clocks;
	else
		clken &= ~clocks;

	__raw_writel(clken, REG_CLKSEL);
}
