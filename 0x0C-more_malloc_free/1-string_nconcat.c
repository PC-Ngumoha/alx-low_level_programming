#include "main.h"
#include <stdlib.h>

unsigned int get_size(char *str);

/**
 * string_nconcat - concatenates s1 to n elements of s2
 * @s1: first string parameter
 * @s2: second string parameter
 * @n: Number of bytes of @s2 to concatenate
 *
 * Return: New string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, total_size;
	unsigned int i, j;
	char *str;

	size1 = get_size(s1);
	size2 = get_size(s2);
	if (n < size2)
	{
		size2 = n;
	}
	total_size = size1 + size2;
	str = malloc(sizeof(*str) * total_size);
	i = 0;
	for (j = 0; j < size1; j++)
	{
		str[i] = s1[j];
		i++;
	}
	for (j = 0; j < size2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	return (str);
}


/**
 * get_size - returns number of characters in str
 * @str: string parameter
 *
 * Return: size of @str
 */
unsigned int get_size(char *str)
{
	unsigned int i, size;

	if (str == NULL)
	{
		return (0);
	}

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}
