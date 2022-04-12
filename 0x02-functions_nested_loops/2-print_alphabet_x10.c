#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Description: prints out all the letters of the english alphabet
 * to the screen ten times.
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		count++;
	}
}
