#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: Pointer to the first integer variable
 * @b: Pointer to the second integer variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
