#include "main.h"

/**
 * _puts_recursion - Uses recursion to print a string to the screen
 * @s: String to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')  /*End of String Reached*/
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s); /*Prints current character*/
		s++;
		_puts_recursion(s); /*Gets the next character*/
	}
}
