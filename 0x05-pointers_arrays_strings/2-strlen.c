#include "main.h"

/**
 * _strlen - returns the length of a String
 * @s: String whose length we want to determine
 *
 * Return: length of the String
 */
int _strlen(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
