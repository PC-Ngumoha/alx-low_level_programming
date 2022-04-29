#include "main.h"

int _strlen_recursion(char *);
int palindrome_checker(char *, int, int);

/**
 * is_palindrome - Determines if s is a palindrome
 * @s: string to be evaluated
 *
 * Return: 1 (Palindrome) or 0 (Not palindrome)
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	return (palindrome_checker(s, 0, length - 1));
}

/**
 * palindrome_checker - Helps determine if s is a palindrome
 * @s: String to evaluate
 * @beg: String beginning
 * @end: String end
 *
 * Return: 1 (palindrome) or 0 (Not palindrome)
 */
int palindrome_checker(char *s, int beg, int end)
{
	if (beg >= end)
		return (1);

	if (*(s + beg) != *(s + end))
	{
		return (0);
	}
	else
	{
		return (palindrome_checker(s, beg + 1, end - 1));
	}
}




/**
 * _strlen_recursion - Determines the length of a string
 * @s: String to be evaluated
 *
 * Return: Length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
