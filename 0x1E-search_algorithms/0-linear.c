#include "search_algos.h"

/**
 * linear_search - search for a value in an array using linear search algo.
 * @array: array we wish to search.
 * @size: size of the array.
 * @value: Target value to search for.
 *
 * Return: index of matching element or -1
 */
int linear_search(int *array, size_t size, int value)
{
	/*
	 * If array points to nothing, return -1
	 * Start at the beginning of the array
	 * Check each element until target is found.
	 * If found, return the index at which it was found
	 * If not found, return -1
	 */
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
