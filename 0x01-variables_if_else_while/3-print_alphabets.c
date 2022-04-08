#include <stdio.h>

/**
 *main - program execution begins here
 *
 *Description: This program prints out all the letters of the alphabet
 *(in lowercase) and then prints it again (this time, in uppercase)
 *and then prints out newline character.
 *Return: 0 (Successful)
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
