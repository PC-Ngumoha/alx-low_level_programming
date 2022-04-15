#include "main.h"

/**
 * print_triangle - prints a triangle to the screen
 * @size: The size of the triangle
 *
 * Description: prints a triangle by repeatedly printing a '#'
 * character to the screen many times as dictated by the value
 * of the "size" argument.
 * Return: Void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 1;
		while (i <= size)
		{
			int spaces;
			int hash;

			spaces = size - i;
			hash = i;
			while (spaces > 0)
			{
				_putchar(' ');
				spaces--;
			}
			while (hash > 0)
			{
				_putchar('#');
				hash--;
			}
			_putchar('\n');
			i++;
		}
	}
}
