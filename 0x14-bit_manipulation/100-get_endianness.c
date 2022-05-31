#include "main.h"

/**
 * get_endianness - determines the endianness of the system
 *
 * Description: Uses an arbitrary memory address and the dereferences it.
 * Depending on the location of it's most significant bit '1'
 * it determines if the machine is little-endian or big-endian
 * Return: 1 (little-endian) or 0 (big-endian)
 */
int get_endianness(void)
{
	unsigned int word = 0x00000001;
	char *msb = (char *)&word;

	return (msb[0]);
}
