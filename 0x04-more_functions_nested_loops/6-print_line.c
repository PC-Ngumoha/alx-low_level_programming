#include "main.h"

/**
 * print_line - prints a line using the _ character
 * @n: Number of times to print '_' character
 *
 * Description: This function takes an integer as argument
 * and repeatedly prints the character '_' in order to
 * form a line on the screen.
 * Return: Void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
