#include "main.h"

/**
 * _strstr - returns the location of a given substring in a string
 * @haystack: String to search
 * @needle: Substring to search for with @haystack
 *
 * Return: Pointer to @needle within @haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			break;
		}
		haystack++;
	}
	i = 1;
	while (needle[i] != '\0')
	{
		if (haystack[i] != needle[i])
		{
			break;
		}
		i++;
	}

	if (needle[i] == '\0')
	{
		return (haystack);
	}
	else
	{
		return (0);
	}
}
