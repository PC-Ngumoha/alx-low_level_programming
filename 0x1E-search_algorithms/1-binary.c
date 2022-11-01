#include "search_algos.h"

/**
 * print_array - prints the elements in a range.
 * @range: range of elements we wish to print.
 * @beg: start of the range.
 * @end: end of the range.
 *
 * Return: void.
 */
void print_array(int *range, size_t beg, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = beg; i <= end; i++)
	{
		printf("%d", range[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for target value using binary search algo.
 * @array: array we wish to search.
 * @size: size of the array.
 * @value: value we want to search for.
 *
 * Return: index of found target or -1
 */
int binary_search(int *array, size_t size, int value)
{
	/*
	 * If array is NULL, return -1
	 * starts at the beginning of the array.
	 * compares the element at the middle of the array with target.
	 * If they are the same, return the index.
	 * If not, determines which subarray to search. (< or >)
	 * Repeats the process until there is no more subarray to search (beg > end)
	 * at which point it returns -1.
	 */
	size_t beg, mid, end;

	beg = 0;
	end = size - 1;
	if (array == NULL)
		return (-1);
	while (beg <= end)
	{
		print_array(array, beg, end);
		mid = (beg + end) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			beg = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
	}
	return (-1);
}
