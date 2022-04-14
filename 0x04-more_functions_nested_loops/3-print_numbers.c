#include "main.h"

/**
 * print_numbers - prints numbers to the terminal
 *
 * Description: Prints out numbers from 0 to 9 to the
 * terminal (Standard output)
 * Return: Void
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
