#include "main.h"


/**
 * print_times_table - prints nxn times table
 * @n: Maximum multiple of times table
 *
 * Description: This will print a times table
 * formed by nxn multiplications. Where n can
 * be any number from 0 to 15 .
 * Return: Void
 */
void print_times_table(int n)
{
	if (n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int temp = i * j;

				if (temp / 100)
				{
					int num1;
					int num2;
					int num3;

					num1 = temp / 100;
					num2 = (temp % 100) / 10;
					num3 = temp % 10;
					_putchar('0' + num1);
					_putchar('0' + num2);
					_putchar('0' + num3);
				}
				else if (temp / 10)
				{
					int num1;
					int num2;

					num1 = temp / 10;
					num2 = temp % 10;
					if (j > 0)
					{
						_putchar(' ');
					}
					_putchar('0' + num1);
					_putchar('0' + num2);
				}
				else
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + temp);
				}

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
