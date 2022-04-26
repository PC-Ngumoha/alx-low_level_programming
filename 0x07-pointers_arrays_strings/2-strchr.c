#include "main.h"

/**
 * _strchr - returns pointer to the first occurence of a character in a string
 * @s: String to search within
 * @c: Character to search for within @s
 *
 * Return: @s or NULL (Depending on whether c is found)
 */
char *_strchr(char *s, char c)
{
	while (*s != '0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
