#include "main.h"

/**
 * _islower - Is the character lowercase?
 * @c: The character code to evaluate
 *
 * Description: This program receives a character from
 * the user and then determines if the character is a
 * lowercase character or not.
 * Return: 1 (if c is lowercase) or 0 (not lowercase)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
