#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees up the memory used by a dynamically allocated struct
 * @d: pointer to the struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
