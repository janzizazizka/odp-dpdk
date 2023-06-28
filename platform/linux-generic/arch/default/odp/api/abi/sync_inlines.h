/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2023 Nokia
 */

#ifndef ODP_ARCH_SYNC_INLINES_H_
#define ODP_ARCH_SYNC_INLINES_H_

#ifdef __cplusplus
extern "C" {
#endif

static inline void _odp_mb_sync(void)
{
	__sync_synchronize();
}

static inline void _odp_mb_sync_load(void)
{
	__sync_synchronize();
}

static inline void _odp_mb_sync_store(void)
{
	__sync_synchronize();
}

#ifdef __cplusplus
}
#endif

#endif
