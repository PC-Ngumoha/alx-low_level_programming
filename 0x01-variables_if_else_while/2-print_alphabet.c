#include <stdio.h>

/**
 * main - program execution begins here
 *
 * Description: This program prints out all the letters of the alphabet
 * and then prints out newline character.
 * Return: 0 (Successful)
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
	putchar('\n');

	return (0);
}
