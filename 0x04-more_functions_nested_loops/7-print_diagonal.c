#include "main.h"

/**
 * print_diagonal - prints a diagonal to the screen
 * @n: The number of '\' to print in order to form the diagonal
 *
 * Description: This function will repeatedly print '\' followed
 * by a new line to the screen in order to create a diagonal line
 * on the screen.
 * Return: Void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		while (i < n)
		{
			int space;

			space = i;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}

			_putchar('\\');
			_putchar('\n');

			i++;
		}
	}
}
