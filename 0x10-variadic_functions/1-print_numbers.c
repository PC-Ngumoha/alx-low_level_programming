#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers seperated by a character to the screen
 * @seperator: string to use to seperate the numbers in a list
 * @n: number of elements to print
 *
 * Return: @n numbers
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int count;
	int i;
	va_list args;

	count = 1;
	va_start(args, n);
	for (i = va_arg(args, int); count <= n; i = va_arg(args, int))
	{
		if (count == n)
		{
			printf("%d", i);
			break;
		}
		
		if (seperator == NULL)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d%s", i, seperator);
		}
		count++;
	}
	printf("\n");
	va_end(args);
}
