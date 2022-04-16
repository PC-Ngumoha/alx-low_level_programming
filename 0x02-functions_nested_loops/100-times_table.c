#include "main.h"

void _print_values(int);

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
					_print_values(temp);
				}
				else if (temp / 10)
				{
					if (j > 0)
					{
						_putchar(' ');
					}
					_print_values(temp);
				}
				else
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_print_values(temp);
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



/**
 * _print_values - prints numbers accurately
 * @val: number to be parsed and printed
 *
 * Description: This function takes a number,
 * parses that number and then prints it to the
 * terminal. It can only parse and print numbers
 * less than or up to three digits in length.
 * Return: Void
 */
void _print_values(int val)
{
	if (val / 100)
	{
		int num1;
		int num2;
		int num3;

		num1 = val / 100;
		num2 = (val % 100) / 10;
		num3 = val % 10;
		_putchar('0' + num1);
		_putchar('0' + num2);
		_putchar('0' + num3);
	}
	else if (val / 10)
	{
		int num1;
		int num2;

		num1 = val / 10;
		num2 = val % 10;
		_putchar('0' + num1);
		_putchar('0' + num2);
	}
	else
	{
		_putchar('0' + val);
	}
}
