#include "main.h"

/**
 * rot13 - encodes a string using the ROT13 system
 * @str: String to be encoded
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *lookup;

	lookup = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (lookup[j] != '\0')
		{
			if (str[i] == lookup[j])
			{
				int index;

				index = ((j + 13) % 26) + ((j / 26) * 26);
				str[i] = lookup[index];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
