#include "main.h"

/**
 * print_sign - Determines if number is signed
 * @n: Integer number to be evaluated
 *
 * Description: This function takes an integer number 'n'
 * as an argument and then determines the signedness of the
 * number. It prints '+' if 'n' is greater than zero, '0' if
 * 'n' is equal to zero and '-' if 'n' is less than zero
 * Return: 1 (> 0) , 0 (== 0) or -1 (< 0)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
