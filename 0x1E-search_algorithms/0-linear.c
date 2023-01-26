#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using L.S algo.
 * @array: Array to search.
 * @size: Size of array.
 * @value: Value to search for.
 *
 * Return: -1 if value not found, 'index' otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
