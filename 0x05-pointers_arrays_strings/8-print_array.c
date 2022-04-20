#include <stdio.h>
#include "main.h"

/**
 * print_array - prints out the contents of an array to the screen
 * @a: pointer to the array
 * @n: Number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}
	printf("\n");
}
