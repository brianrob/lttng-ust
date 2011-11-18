#ifndef _LTTNG_UST_H
#define _LTTNG_UST_H

/*
 * Copyright (c) 2011 - Mathieu Desnoyers <mathieu.desnoyers@efficios.com>
 *
 * THIS MATERIAL IS PROVIDED AS IS, WITH ABSOLUTELY NO WARRANTY EXPRESSED
 * OR IMPLIED.  ANY USE IS AT YOUR OWN RISK.
 *
 * Permission is hereby granted to use or copy this program
 * for any purpose,  provided the above notices are retained on all copies.
 * Permission to modify the code and to distribute modified code is granted,
 * provided the above notices are retained, and a notice that the code was
 * modified is included with the above copyright notice.
 */

#ifdef __cplusplus
extern "C" {
#endif

extern void ust_before_fork(sigset_t *save_sigset);
extern void ust_after_fork_parent(sigset_t *restore_sigset);
extern void ust_after_fork_child(sigset_t *restore_sigset);

#ifdef __cplusplus 
}
#endif

#endif /* _LTTNG_UST_H */