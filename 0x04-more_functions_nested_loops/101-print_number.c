#include "main.h"

void print_two_digits(int);
void print_three_digits(int);
void print_four_digits(int);

/**
 * print_number - prints numbers to the screen
 * @n: Number to print
 *
 * Description: This function takes an integer,
 * parses it and prints it to the terminal.
 * Return: Void
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
		_putchar('0' + n);
	}
}


/**
 * print_two_digits - prints two digit number to the screen
 * @n: Number to be printed
 *
 * Return: void
 */
void print_two_digits(int n)
{
	int num1;
	int num2;

	num1 = n / 10;
	num2 = n % 10;
	if (n < 0)
	{
		num1 = -num1;
		num2 = -num2;
		_putchar('-');
	}
	_putchar('0' + num1);
	_putchar('0' + num2);
}

/**
 * print_three_digits - prints three digit number to the screen
 * @n: Number to be printed
 *
 * Return: void
 */
void print_three_digits(int n)
{
	int num1;
	int num2;
	int num3;

	num1 = n / 100;
	num2 = (n % 100) / 10;
	num3 = n % 10;
	if (n < 0)
	{
		num1 = -num1;
		num2 = -num2;
		num3 = -num3;
		_putchar('-');
	}
	_putchar('0' + num1);
	_putchar('0' + num2);
	_putchar('0' + num3);
}

/**
 * print_four_digits - prints four digit number to the screen
 * @n: Number to be printed
 *
 * Return: void
 */
void print_four_digits(int n)
{
	int num1;
	int num2;
	int num3;
	int num4;

	num1 = n / 1000;
	num2 = ((n % 1000) / 100);
	num3 = ((n % 100) / 10);
	num4 = n % 10;
	if (n < 0)
	{
		num1 = -num1;
		num2 = -num2;
		num3 = -num3;
		num4 = -num4;
		_putchar('-');
	}
	_putchar('0' + num1);
	_putchar('0' + num2);
	_putchar('0' + num3);
	_putchar('0' + num4);
}



