#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - uses malloc to assign dynamic memory
 * @b: size of memory to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
