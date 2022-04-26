#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest buffers
 * @dest: Destination buffer
 * @src: Source buffer
 * @n: Number of bytes to copy from @src to @dest
 *
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		*dest = *src;

		dest++;
		src++;
		count++;
	}
	return (dest);
}
