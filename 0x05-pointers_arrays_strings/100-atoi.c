#include "main.h"

/**
 * _atoi - converts a string to an integer number
 * @s: String to be converted to an integer number
 *
 * Return: Resulting integer number
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int num;

	i = 0;
	sign = 1;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}

		for (; s[i] >= '0' && s[i] <= '9'; i++)
		{
			num = num * 10 + ((int)s[i] - '0');
		}

		if (num > 0 || s[i] == '\0')
		{
			break;
		}

		i++;
	}

	return (num * sign);
}
