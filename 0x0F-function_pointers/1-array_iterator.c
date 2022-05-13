#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - applies a specific action to a collection of elements
 * @array: an array
 * @size: size of the array
 * @action: pointer to a function that takes int argument and returns nothing
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
