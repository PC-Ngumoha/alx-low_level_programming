#include "main.h"

int get_length(char *);

/**
 * rev_string - reverses a string
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length;
	int i;
	int j;

	length = get_length(s);

	for (i = 0, j = length - 1; !(i >= j); i++, j--)
	{
		char temp;

		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

}

/**
 * get_length - returns length of String
 * @s: String whose length we wish to determine
 *
 * Return: Length of String
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

