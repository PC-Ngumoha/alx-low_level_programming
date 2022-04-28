#include "main.h"

/**
 * _pow_recursion - returns the result of x ^ y
 * @x: Number to be multiplied @y times
 * @y: Number of times to multiply the "@x"
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
