#include "main.h"

/**
 * puts2 - prints every other character in a String
 * @str: String to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int count;
	int i;

	i = 0;
	count = 1;
	while (str[i] != '\0')
	{
		if (count % 2 != 0)
		{
			_putchar(str[i]);
		}
		++count;
		i++;
	}
	_putchar('\n');
}
