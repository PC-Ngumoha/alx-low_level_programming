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
	unsigned int count;
	char *str;
	va_list args;

	if (n == 0)
		return;
	if (seperator == NULL)
		seperator = "";

	count = 1;
	va_start(args, n);
	for (str = va_arg(args, char *); count <= n; str = va_arg(args, char *))
	{
		if (count == n)
		{
			if (str == NULL)
				printf("(nil)\n");
			else
				printf("%s\n", str);
		}
		else
		{
			if (str == NULL)
				printf("(nil)%s", seperator);
			else
				printf("%s%s", str, seperator);
		}
		count++;
	}
	va_end(args);
}
