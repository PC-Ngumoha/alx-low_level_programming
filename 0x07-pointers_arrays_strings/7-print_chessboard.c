#include "main.h"

/**
 * print_chessboard - prints out the contents of a multidimensional array
 * @a: multidimensional array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring Variables*/
	int i, j;

	i = 0;
	while (i < 8) /*Repetition*/
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n'); /*Print Newline*/
		i++; /*i + 1*/
	}
}

