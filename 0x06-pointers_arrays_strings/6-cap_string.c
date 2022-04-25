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
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		switch (str[i])
		{
			case ' ':
			case '\n':
			case '\t':
			case ',':
			case '.':
			case ';':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] -= 32;
				}
				if (str[i] == '\t')
				{
					str[i] = ' ';
				}
				break;
			default:
				break;
		}
		i++;
	}

	return (str);
}
