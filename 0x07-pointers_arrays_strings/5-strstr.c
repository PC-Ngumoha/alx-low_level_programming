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
	char *str1, *str2; /*Declaring Variables*/

	while (*haystack != '\0')
	{
		str1 = haystack;  /*Setting Values*/
		str2 = needle;

		/*While comparism is possible*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		
		if (*str2 == '\0')
		{
			return (str1); /*return pointer to location of haystack*/
		}
		haystack = str1 + 1;
	}
	return (0);
}
