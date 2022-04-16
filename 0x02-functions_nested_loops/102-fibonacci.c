#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Description: This is a program that prints
 * out to the terminal the first 50 numbers of
 * the fibonacci sequence.
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int time;
	long prev1;
	long prev2;
	long curr;

	time  = 1;
	prev1 = 1;
	prev2 = 2;
	while (time <= 50)
	{

		if (time > 2)
		{
			if (time < 50)
			{
				curr = (prev2 + prev1);
				printf("%ld, ", curr);

				prev1 = prev2;
				prev2 = curr;
			}
			else
			{
				curr = (prev2 + prev1);
				printf("%ld", curr);
			}

		}
		else
		{
			printf("%d, ", time);
		}
		time++;
	}
	printf("\n");

	return (0);
}
