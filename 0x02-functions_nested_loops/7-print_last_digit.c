#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints last digit in a number
 * @n: The integer number that is to be worked on
 *
 * Description: This function takes a number 'n' as
 * argument and returns the last digit of the number
 * Return: last digit of 'n'
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		unsigned int temp = n == INT_MIN ? ((unsigned int)-(INT_MIN + 1)) + 1U
			: (unsigned int) -n;

		_putchar('0' + (temp % 10));
		return (temp % 10);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
