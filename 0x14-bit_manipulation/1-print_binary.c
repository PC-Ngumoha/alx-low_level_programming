#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal to the screen
 * @num: number to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int num)
{
	int temp;
	static int count;

	if (num == 0 && count > 0)
		return;
	else if (num == 0)
	{
		_putchar('0');
		return;
	}

	temp = (num & 1);
	count++;
	print_binary(num >>= 1);
	_putchar('0' + temp);
}
