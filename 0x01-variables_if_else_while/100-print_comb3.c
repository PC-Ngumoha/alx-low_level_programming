#include <stdio.h>

/**
 *main - program entry point
 *
 *Description: This program prints a comma seperated list of
 *all possible combinations of double-digit decimal numbers
 *to the terminal.
 *Return: 0 (Successful)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = (num1 + 1); num2 <= 9; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);

			if (num1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
