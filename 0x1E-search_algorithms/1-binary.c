#include "search_algos.h"


/**
 * print_range - prints out range of elements within array.
 * @array: Array of interest.
 * @beg: Index of first element.
 * @end: Index of last element.
 *
 * Return: nothing.
 */
void print_range(int *array, size_t beg, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = beg; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searchs an array using the B.S algo.
 * @array: Array to search.
 * @size: Size of array.
 * @value: Value to search for.
 *
 * Return: -1 if unsuccessful, 'index' otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t beg, end, mid;

	if (!array)
		return (-1);
	beg = 0;
	end = size - 1;
	while (beg <= end)
	{
		print_range(array, beg, end);
		mid = (size_t) ((beg + end) / 2);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			beg = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
	}
	return (-1);
}
