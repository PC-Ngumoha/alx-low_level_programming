#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point into the program
 *
 * Description: The function below enable generates a random number "n" and
 * uses aseries of if...else statements to determine whether the random
 * number generated is zero, a positive number or a negative number.
 * Return: 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
