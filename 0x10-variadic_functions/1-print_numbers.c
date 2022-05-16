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
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
		{
			if (seperator)
				printf("%s", seperator);
		}
	}
	va_end(args);
	printf("\n");
}
