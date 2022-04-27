#include "main.h"

/**
 * _strpbrk - returns a pointer to the first occurence in s of any bytes found
 * @s: String to be searched for the occurence of bytes in @accept
 * @accept: String containing the bytes to be searched for
 *
 * Return: Pointer to first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}

	return (0);
}
