#include "main.h"

void print_two_digits(int);
void print_three_digits(int);
void print_four_digits(int);

/**
 * print_number - prints an integer to the screen
 * @n: Integer to be printed to the screen
 *
 * Return: void
 */
void print_number(int n)
{
	if (n / 1000)
	{
		print_four_digits(n);
	}
	else if (n / 100)
	{
		print_three_digits(n);
	}
	else if (n / 10)
	{
		print_two_digits(n);
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}
		_putchar('0' + n);
	}
}


/**
 * print_two_digits - prints two digit numbers to the screen
 * @n: Two digit integer to print
 *
 * Return: void
 */
void print_two_digits(int n)
{
	int num1;
	int num2;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	num1 = n % 10;
	num2 = n / 10;
	_putchar('0' + num2);
	_putchar('0' + num1);
}

/**
 * print_three_digits - prints three digit numbers to the screen
 * @n: Three digit integer to print
 *
 * Return: void
 */
void print_three_digits(int n)
{
	int num1;
	int num2;
	int num3;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	num1 = n % 10;
	num2 = (n % 100) / 10;
	num3 = n / 100;
	_putchar('0' + num3);
	_putchar('0' + num2);
	_putchar('0' + num1);
}

/**
 * print_four_digits - prints four digit numbers to the screen
 * @n: Four digit integer to print
 *
 * Return: void
 */
void print_four_digits(int n)
{
	int num1;
	int num2;
	int num3;
	int num4;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	num1 = n % 10;
	num2 = (n % 100) / 10;
	num3 = (n % 1000) / 100;
	num4 = n / 1000;
	_putchar('0' + num4);
	_putchar('0' + num3);
	_putchar('0' + num2);
	_putchar('0' + num1);
}
