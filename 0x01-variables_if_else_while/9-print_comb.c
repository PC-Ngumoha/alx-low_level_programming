#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: This program prints a comma seperated list of
 * decimal numbers to the terminal.
 * Return: 0 (Successful)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10;  num++)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
