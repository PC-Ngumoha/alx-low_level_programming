#include "main.h"

/**
 * print_square - prints a square shape to the terminal
 * @size: an integer which represents the size of the square
 *
 * Description: This function creates a square by repeatedly
 * writing '#' to the screen for the number of times specified
 * by the variable "size"
 * Return: Void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
