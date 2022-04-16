#include <stdio.h>
#include "main.h"

/**
 * main - entry point for the program
 *
 * Description: Program prints the sum of the
 * multiples of 3 and 5 from 0 to 1024
 * (excluded)
 * Return: Always 0
 */
int main(void)
{
	int n;
	int total;

	n = 0;
	total = 0;
	while (n < 1024)
	{
		if (n % 3 == 0)
		{
			total += n;
		}
		else if (n % 5 == 0)
		{
			total += n;
		}

		n++;
	}

	printf("%d\n", total);

	return (0);
}
