#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints out a name to the screen
 * @name: string parameter (Name)
 * @f: pointer to a function that takes a string argument and returns nothing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name); /*Calls the function with the string*/
}
