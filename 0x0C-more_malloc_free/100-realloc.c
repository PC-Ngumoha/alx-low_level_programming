#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a new block of memory to a pointer
 * @ptr: Pointer to previously allocated memory
 * @old_size: Size of previous memory block
 * @new_size: Size of new memory block
 *
 * Return: Pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (new_ptr);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *) new_ptr + i) = *((char *) ptr + i);
		}
		free(ptr);
	}
	return (new_ptr);
}
