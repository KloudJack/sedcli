/*
 * Copyright (C) 2020 Intel Corporation
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#ifndef _SEDCLI_UTIL_H_
#define _SEDCLI_UTIL_H_

int get_lock_type(const char *lock_type);

int get_password(char *pwd, uint8_t *len, uint8_t min, uint8_t max);

void *alloc_locked_buffer(size_t size);

void free_locked_buffer(void *buf, size_t buf_size);

#endif /* _SEDCLI_UTIL_H_ */
