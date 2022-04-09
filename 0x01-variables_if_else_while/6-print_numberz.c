#include <stdio.h>

/**
 *main - program execution begins here
 *
 *Description: prints all the numbers that make up the
 *decimal number system and then prints newline.
 *Return: 0 (Successful)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
