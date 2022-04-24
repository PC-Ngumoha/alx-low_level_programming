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
		if (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
				|| str[i] == 44 || str[i] == 59
				|| str[i] == 46 || str[i] == 33
				|| str[i] == 63 || str[i] == 34
				|| str[i] == 40 || str[i] == 41
				|| str[i] == 123 || str[i] == 125)
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
