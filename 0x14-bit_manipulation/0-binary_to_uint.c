#include "main.h"

unsigned int _pow(int base, int exp);

/**
 * binary_to_uint - returns the decimal equivalent of a binary number
 * @str: binary number to be converted
 *
 * Return: decimal number (Success) or 0 (error)
 */
unsigned int binary_to_uint(const char *str)
{
	unsigned int exp, result = 0;
	int i, count = 0;

	if (str == NULL)
		return (0);

	while (str[count] != '\0')
	{
		if (str[count] == '1' || str[count] == '0')
			count++;
		else
			return (0);
	}

	for (exp = 0, i = count - 1; i >= 0; exp++, i--)
		result += (str[i] - '0') * _pow(2, exp);

	return (result);
}


/**
 * _pow - returns the power of a base to a specific exponent
 * @base: base number
 * @exp: exponent value
 *
 * Return: @base ^ @exp
 */
unsigned int _pow(int base, int exp)
{
	if (exp <= 0)
		return (1);
	else
		return (base * _pow(base, exp - 1));
}
