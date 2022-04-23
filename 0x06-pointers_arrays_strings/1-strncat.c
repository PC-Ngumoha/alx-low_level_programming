#include "main.h"

int get_length(char *);

/**
 * _strncat - concatenates part of a string to another string
 * @dest: Target of concatenation
 * @src: Source of characters to concatenate
 * @n: Number of characters to concatenate
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i;

	length = get_length(dest);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';

	return (dest);
}

/**
 * get_length - returns the length of a string
 * @s: String whose length we are interested in determining
 *
 * Return: length of s
 */
int get_length(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
