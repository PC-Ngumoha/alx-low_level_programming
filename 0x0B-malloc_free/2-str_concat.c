#include "holberton.h"
#include <stdlib.h>

unsigned int get_length(char *str);

/**
 * str_concat - concatenates the contents of two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, total_size;
	unsigned int i, j;
	char *ptr;

	size1 = get_length(s1);
	size2 = get_length(s2);
	total_size = size1 + size2;
	ptr = (char *) malloc((sizeof(char) *  total_size) + 1);
	if (ptr == 0)
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (i < total_size)
	{
		if (i < size1)
		{
			ptr[i] = s1[i];
		}
		else if (i >= size1)
		{
			ptr[i] = s2[j];
			j++;
		}
		i++;
	}
	ptr[total_size] = '\0';
	return (ptr);
}


/**
 * get_length - determines the size of the string
 * @str: String parameter
 *
 * Return: length of @str
 */
unsigned int get_length(char *str)
{
	unsigned int i, length;

	if (str == 0) /* If str points to NULL */
	{
		return (0);
	}

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
