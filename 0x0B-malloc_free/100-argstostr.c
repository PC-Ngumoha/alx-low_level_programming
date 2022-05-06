#include "holberton.h"
#include <stdlib.h>


int get_length(char *str);
char *_str_concat(char *s1, char *s2);

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
	int i;

	str = "";
	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			str = _str_concat(str, av[i]);
			if (str == NULL)
			{
				return (NULL);
			}
		}
	}
	return (str);
}


/**
 * _str_concat - concatenates two strings
 * @s1: first string parameter
 * @s2: second string parameter
 *
 * Return: concatenation of @s1 and @s2
 */
char *_str_concat(char *s1, char *s2)
{
	int size1, size2, total_size;
	int i, j;
	char *result;

	size1 = get_length(s1);
	size2 = get_length(s2);
	total_size = size1 + size2;
	result = (char *) malloc((sizeof(char) * total_size) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < total_size)
	{
		if (i < size1)
		{
			result[i] = s1[i];
		}
		else if (i >= size1)
		{
			result[i] = s2[j];
			j++;
		}
		i++;
	}
	result[total_size] = '\n';
	result[total_size + 1] = '\0';

	return (result);
}




/**
 * get_length - returns the length of a string
 * @str: String parameter
 *
 * Return: length of @str
 */
int get_length(char *str)
{
	int length, i;

	if (str == NULL)
	{
		return (0);
	}

	length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
