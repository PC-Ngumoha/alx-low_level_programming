#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: Number of elements in the array
 * @c: Character used to set all the memory locations in the created array
 *
 * Return: 0 or *ptr
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size > 0) /* Has one or more available memory spaces */
	{
		arr = (char *) malloc(sizeof(char) * size);
		if (arr == 0)  /* Fails to allocate memory */
		{
			return (0);
		}

		for (i = 0; i < size; i++) /* Sets available memory spaces*/
		{
			arr[i] = c;
		}
	}
	else
	{
		return (0);
	}

	return (arr);
}
