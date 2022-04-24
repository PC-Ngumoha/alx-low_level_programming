#include "main.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		int temp;

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
