#ifndef MEMORY_STATS_H
#define MEMORY_STATS_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Memory stats for AVR-libc
 */

#include <stddef.h>

/*
 * Return free memory between heap and top of stack,
 * subtracting the malloc margin.
 * This is how much the heap can still grow.
 */
size_t free_stack(void);

/*
 * Amount of memory that is currently allocated by the heap.
 */
size_t allocated_heap(void);

#ifdef __cplusplus
}
#endif

#endif
