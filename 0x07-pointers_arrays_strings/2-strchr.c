#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns pointer to the first occurence of a character in a string
 * @s: String to search within
 * @c: Character to search for within @s
 *
 * Return: @s or @s++ (Depending on the location of c)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}

	return (s);
}
