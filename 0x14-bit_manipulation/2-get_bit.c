#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @num: number which contains the bit
 * @index: index at which bit must be found
 *
 * Return: bit (Success) or -1 (error)
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		num >>= 1;
		if (num == 0)
			break;
	}
	if (num == 0 && i < index)
		return (-1);
	return (num & 1);
}
