#include "main.h"

/**
 * cap_string - Capitalize every word in a string
 * @str: String argument
 *
 * Return: Capitalized @str
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';'
				|| str[i] == '.' || str[i] == '!'
				|| str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')'
				|| str[i] == '{' || str[i] == '}')
		{
			if (str[i] == '\t')
			{
				str[i] = ' ';
			}

			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}

		i++;
	}

	return (str);
}
