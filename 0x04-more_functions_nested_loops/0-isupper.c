#include "main.h"

/**
 * _isupper - Determines if a character is an uppercase character
 * @c: The integer representing the ASCII code of the character
 *
 * Description: This function takes a character as an argument
 * and then uses the ASCII code of that character to determine
 * if that character is an uppercase character or not.
 * Return: 1 (uppercase) or 0 (not uppercase)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
