#include "main.h"

/**
 * _strchr - returns pointer to the first occurence of a character in a string
 * @s: String to search within
 * @c: Character to search for within @s
 *
 * Return: @s or @s++ (Depending on the location of c)
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	return (s + i);
}
