/* abov_touchkey.h -- Linux driver for abov chip as touchkey
 *
 * Copyright (C) 2013 Samsung Electronics Co.Ltd
 * Author: Junkyeong Kim <jk0430.kim@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 */

#ifndef __LINUX_ABOV_TOUCHKEY_H
#define __LINUX_ABOV_TOUCHKEY_H

#define ABOV_TK_NAME "abov-touchkey-ft1804"
#define ABOV_ID 0x40

struct abov_touchkey_platform_data {
	unsigned long irq_flag;
	int gpio_en;
	int gpio_int;
	int gpio_sda;
	int gpio_scl;
	int gpio_rst;
	int gpio_tkey_led_en;
	int gpio_seperated;
	int sub_det;
	struct regulator *vdd_io_vreg;
	struct regulator *avdd_vreg;
	struct regulator *dvdd_vreg;
	void (*input_event) (void *data);
	int (*power) (void *, bool on);
	int (*keyled) (bool on);
	char *fw_path;
	bool boot_on_ldo;
	bool bringup;
};
#ifdef CONFIG_BATTERY_SAMSUNG
extern int poweroff_charging;
#endif
#endif /* LINUX_ABOV_TOUCHKEY_H */
