#include "main.h"

/**
 * _strspn - returns the size of the initial segment of a string
 * @s: String to be checked
 * @accept: String to use in the checking
 *
 * Return: @count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	i = 0;
	count = 0;
	while (s[i] != ' ')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
		i++;
	}
	return (count);
}
