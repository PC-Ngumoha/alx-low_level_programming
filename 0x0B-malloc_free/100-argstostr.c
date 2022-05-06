#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates the command line arguments into a string
 * @ac: count of command line arguments
 * @av: vector holding command line arguments
 *
 * Return: Newly created string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	int count;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}

	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
	}
	count = count + ac + 1;
	str = (char *) malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
