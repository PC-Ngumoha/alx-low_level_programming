#include <stdio.h>

void fizz_buzz(void);

/**
 * main - Used to test the fizz_buzz function
 *
 * Return: Always 0
 */
int main(void)
{
	fizz_buzz();

	return (0);
}


/**
 * fizz_buzz - simple FIZZBUZZ program
 *
 * Return: Void
 */
void fizz_buzz(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

		i++;
	}
	printf("\n");
}
