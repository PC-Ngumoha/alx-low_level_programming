#include "main.h"

/**
 * print_chessboard - prints out the contents of a multidimensional array
 * @a: multidimensional array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			char temp = *(*(a + i) + j);
			_putchar(temp);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
