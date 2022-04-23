#include "main.h"

/**
 * _strncpy - copies at most 'n' characters from src to dest
 * @dest: destination
 * @src: source
 * @n: number of characters to copy
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}

	return (dest);
}
