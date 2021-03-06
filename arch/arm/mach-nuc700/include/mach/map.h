/*
 * arch/arm/mach-nuc700/include/mach/map.h
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

#ifndef __ASM_ARCH_MAP_H
#define __ASM_ARCH_MAP_H

#include <asm/sizes.h>

#define AHB_IO_BASE		0xFFF00000
#define APB_IO_BASE		0xFFF80000

/*
 * NUC700 AHB device
 */

#define NUC700_PA_GCR		(AHB_IO_BASE + 0x0000)
#define NUC700_SZ_GCR		SZ_4K

#define NUC700_PA_EBI		(AHB_IO_BASE + 0x1000)
#define NUC700_SZ_EBI		SZ_4K

#define NUC700_PA_CACHE		(AHB_IO_BASE + 0x2000)
#define NUC700_SZ_CACHE		SZ_4K

#define NUC700_PA_EMAC		(AHB_IO_BASE + 0x3000)
#define NUC700_SZ_EMAC		SZ_4K

#define NUC700_PA_GDMA		(AHB_IO_BASE + 0x4000)
#define NUC700_SZ_GDMA		SZ_4K

#define NUC700_PA_USBH		(AHB_IO_BASE + 0x5000)
#define NUC700_SZ_USBH		SZ_4K

#define NUC700_PA_USBD		(AHB_IO_BASE + 0x6000)
#define NUC700_SZ_USBD		SZ_4K

#define NUC700_PA_SDH		(AHB_IO_BASE + 0x7000)
#define NUC700_SZ_SDH		SZ_4K

#define NUC700_PA_LCD		(AHB_IO_BASE + 0x8000)
#define NUC700_SZ_LCD		SZ_4K

#define NUC700_PA_AC97I2S	(AHB_IO_BASE + 0x9000)
#define NUC700_SZ_AC97I2S	SZ_4K

/*
 * NUC700 APB device
 */

#define NUC700_PA_UART		(APB_IO_BASE + 0x0000)
#define NUC700_SZ_UART		SZ_4K

#define NUC700_PA_TIMER		(APB_IO_BASE + 0x1000)
#define NUC700_SZ_TIMER		SZ_4K

#define NUC700_PA_AIC		(APB_IO_BASE + 0x2000)
#define NUC700_SZ_AIC		SZ_4K

#define NUC700_PA_GPIO		(APB_IO_BASE + 0x3000)
#define NUC700_SZ_GPIO		SZ_4K

#define NUC700_PA_RTC		(APB_IO_BASE + 0x4000)
#define NUC700_SZ_RTC		SZ_4K

#define NUC700_PA_SCHI		(APB_IO_BASE + 0x5000)
#define NUC700_SZ_SCHI		SZ_4K

#define NUC700_PA_I2C		(APB_IO_BASE + 0x6000)
#define NUC700_SZ_I2C		SZ_4K

#define NUC700_PA_PWM		(APB_IO_BASE + 0x7000)
#define NUC700_SZ_PWM		SZ_4K

#define NUC700_PA_KPI		(APB_IO_BASE + 0x8000)
#define NUC700_SZ_KPI		SZ_4K

#define NUC700_PA_PS2		(APB_IO_BASE + 0x9000)
#define NUC700_SZ_PS2		SZ_4K

#define NUC700_IRQ(x)	(x)
#define CLK_BA		NUC700_PA_CLKPWR
#define EBI_BA		NUC700_PA_EBI
#define GCR_BA		NUC700_PA_GCR
#define AIC_BA		NUC700_PA_AIC
#define TMR_BA		NUC700_PA_TIMER
#define USBH_BA		NUC700_PA_USBH
#define USBD_BA		NUC700_PA_USBD
#define UART_BA		NUC700_PA_UART
#define GPIO_BA		NUC700_PA_GPIO
#define CACHE_BA	NUC700_PA_CACHE
#define I2C_BA		NUC700_PA_I2C
#define SD_BA		NUC700_PA_SDH
#define PS2_BA		NUC700_PA_PS2
#define LCD_BA		NUC700_PA_LCD

#define NUC_IOMEM(x)	((void __iomem __force *)(x))

#endif /* __ASM_ARCH_MAP_H */
