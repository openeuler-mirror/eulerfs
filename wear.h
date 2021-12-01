/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2021. Huawei Technologies Co., Ltd. All rights reserved.
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef EUFS_WEAR_H
#define EUFS_WEAR_H

#include <linux/fs.h>

extern int wear_threshold;
extern int wear_control;

struct page_wear {
	int wear;
};

void wear_init(struct super_block *sb);
void wear_fini(struct super_block *sb);
bool wear_inc(struct super_block *sb, void *page);

#endif /* EUFS_WEAR_H */
