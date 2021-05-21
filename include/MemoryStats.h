#ifndef MEMORY_STATS_H
#define MEMORY_STATS_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Memory stats for AVR-libc
 */

#include <stddef.h>

size_t free_stack(void);
size_t allocated_heap(void);

#ifdef __cplusplus
}
#endif

#endif
