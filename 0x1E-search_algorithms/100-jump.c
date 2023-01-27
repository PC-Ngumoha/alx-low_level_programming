#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array using Jump Search.
 * @array: Array to search.
 * @size: Size of the Array.
 * @value: Value to search for.
 *
 * Return: -1 if not found, i otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, curr, limit;

	if (!array)
		return (-1);
	jump = (size_t) sqrt(size);
	curr = 0;
	while (array[curr] < value)
	{
		if (curr >= size)
			break;
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		curr += jump;
	}
	limit = curr;
	curr -= jump;
	printf("Value found between indexes [%lu] and [%lu]\n", curr, limit);
	while (array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		if ((curr == limit) || (curr == size - 1))
			break;
		curr++;
	}
	if (array[curr] == value)
		return (curr);
	else
		return (-1);
}
