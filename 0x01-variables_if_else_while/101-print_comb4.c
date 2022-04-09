#include <stdio.h>

/**
 *main - program entry point
 *
 *Description: This program prints a comma seperated list of
 *all possible combinations of triple-digit decimal numbers
 *to the terminal.
 *Return: 0 (Successful)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = (num1 + 1); num2 <= 8; num2++)
		{
			for (num3 = (num2 + 1); num3 <= 9; num3++)
			{
				putchar('0' + num1);
				putchar('0' + num2);
				putchar('0' + num3);

				if (num1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
