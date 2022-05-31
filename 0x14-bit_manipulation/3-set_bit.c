#include "main.h"

/**
 * set_bit - sets the bit at a particular index in a number to 1
 * @num: pointer to the number we want to set
 * @index: specified index of bit to set
 *
 * Return: 1 (Success) or -1 (failed)
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned int setter;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	setter = 1 << index;
	*num = *num | setter;
	return (1);
}
