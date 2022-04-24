#include "main.h"

/**
 * leet - encodes a string as 1337
 * @str: String argument
 *
 * Return: @str
 */
char *leet(char *str)
{

	char *check;
	char *replace;
	int i;
	int j;

	check = "aeotl";
	replace = "43071";
	i = 0;
	while (check[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[j] == check[i] || str[j] == (check[i] - 32))
			{
				str[j] = replace[i];
			}

			j++;
		}

		i++;
	}

	return (str);
}
