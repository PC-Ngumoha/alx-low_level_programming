#include "main.h"

/**
 * _print - prints out integers of any length
 *
 * Return: Void
 */
void _print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	if (n / 10)
		_print(n / 10);

	_putchar('0' + (n % 10));
}
