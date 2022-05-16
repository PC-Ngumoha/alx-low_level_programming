#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints n number of strings to the screen
 * @seperator: string parameter
 * @n: count of numbers to print
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
		{
			if (seperator)
				printf("%s", seperator);
		}
	}
	va_end(args);
	printf("\n");
}
