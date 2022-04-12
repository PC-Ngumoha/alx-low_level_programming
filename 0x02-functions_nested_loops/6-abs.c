#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: The number to be converted into it's absolute value
 *
 * Description: This function takes an integer number 'n'
 * and computes the absolute value of that number.
 * Return: absolute value of 'n'
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
