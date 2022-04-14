#include "main.h"

/**
 * _isdigit - Determines if a character is a digit
 * @c: The character to be evaluated
 *
 * Description: This function takes a character as it's
 * argument and uses the ASCII code of the character to
 * determine if the character is a digit or not.
 * Return: 1 (digit) or 0 (not digit)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
