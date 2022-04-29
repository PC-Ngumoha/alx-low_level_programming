#include "main.h"

int _sqrt_recursion_helper(int, int, int);

/**
 * _sqrt_recursion - Determines the square root of n
 * @n: Number to be examined
 *
 * Return: Square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0, n));
}

/**
 * _sqrt_recursion_helper - helps determine the square root of n
 * @n: Number to be examined
 * @start: Number to start search
 * @end: Number to end search
 *
 * Return: Square root of n
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	long mid;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return ((int)mid);
	}
	else if (mid * mid < n)
	{
		return ((int)_sqrt_recursion_helper(n, mid + 1, end));
	}
	else
	{
		return ((int) _sqrt_recursion_helper(n, start, mid - 1));
	}
}
