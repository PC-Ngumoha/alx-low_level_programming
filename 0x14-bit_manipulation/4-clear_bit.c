#include "main.h"

/**
 * clear_bit - sets a bit at a specified index in a number to 0
 * @num: number provided for operation
 * @index: index of bit to clear
 *
 * Return: 1 (Success) or 0 (fail)
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	int clear, bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	clear = 1 << index;
	bit = (*num >> index) & 1;
	if (bit == 1)
		*num = *num ^ clear;
	return (1);
}
