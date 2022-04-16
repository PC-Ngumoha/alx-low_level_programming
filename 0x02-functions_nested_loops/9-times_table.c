#include "main.h"

/**
 * times_table - prints 9x9 times table
 *
 * Description: This function will create a 9x9 times table
 * and print it to the terminal
 * Return: Void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int temp = i * j;

			if (temp / 10)
			{
				int num1;
				int num2;

				num1 = temp / 10;
				num2 = temp % 10;
				_putchar('0' + num1);
				_putchar('0' + num2);
			}
			else
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + temp);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
