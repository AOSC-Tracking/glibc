/* SPDX-License-Identifier: LGPL-2.1-or-later */

#include_next <kernel-features.h>

/* Allow falling back to syscalls "easier to audit" for statx() itself.  */
#undef __ASSUME_STATX
