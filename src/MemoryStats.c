#include "MemoryStats.h"
#include <alloca.h>

extern char *__malloc_heap_start;
extern char* __brkval;
extern size_t __malloc_margin;

void* heap_end(void)
{
	if (__brkval == 0) {
		return __malloc_heap_start;
	}
	return __brkval;
}

size_t allocated_heap(void)
{
	return heap_end() - (void*) __malloc_heap_start;
}

size_t free_stack(void)
{
	void* here = alloca(1);
	return here - heap_end() - __malloc_margin;
}

