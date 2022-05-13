#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches through a collection of elements for one that matches
 * a certain and returns the index of the first occurence of such element
 * @array: array (collection of elements to search from)
 * @size: size of array
 * @cmp: pointer to function that takes int argument and returns an int
 *
 * Return: index of elem
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
