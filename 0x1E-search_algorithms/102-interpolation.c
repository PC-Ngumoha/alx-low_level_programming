#include "search_algos.h"


/**
 * interpolation_search - searches for a value in an array using I.S algo.
 * @array: Array to search.
 * @size: Size of array.
 * @value: Value to search for in the array.
 *
 * Return: -1 if not found, i otherwise.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t hi, lo, pos;

	if (!array)
		return (-1);
	lo = 0;
	hi = size - 1;
	while (lo <= hi)
	{
		pos = lo + (((double)(hi - lo) /
			(array[hi] - array[lo])) * (value - array[lo]));
		if (pos < size)
			printf("Value checked array [%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
