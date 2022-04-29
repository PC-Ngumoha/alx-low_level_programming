#include "main.h"

int is_prime_number_helper(int, int);

/**
 * is_prime_number - determines is n is a prime number
 * @n: Number whose primality we wish to evaluate
 *
 * Return: 1 (Prime number) or 0 (Not prime number)
 */
int is_prime_number(int n)
{
	int start;

	start = 2;

	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(start, n));
	}
}

/**
 * is_prime_number_helper - helps determine if n is a prime number
 * @start: current value being used to test primality of n
 * @n: Number whose primality we wish to examine
 *
 * Return: 1 (Prime number) or 0 (Not prime number)
 */
int is_prime_number_helper(int start, int n)
{
	if (start == n)
	{
		return (1);
	}
	else if (n % start == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(start + 1, n));
	}
}
