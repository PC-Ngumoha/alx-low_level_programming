#include "main.h"

/**
 * set_string - uses indirection to set the value of a string
 * @s: Pointer to the string to be set
 * @to: string used to set the value of @s
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
