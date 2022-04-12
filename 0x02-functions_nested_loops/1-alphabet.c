#include "main.h"

/**
 *print_alphabet - prints alphabet to terminal
 *
 * Description: Prints the letters of the english alphabet
 * in lowercase to the terminal.
 * Return: Void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
