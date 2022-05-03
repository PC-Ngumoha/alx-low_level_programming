#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main entry point for the program
 * @argc: Count of the command line arguments
 * @argv: Vector containing command line arguments
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num)
		{
			if (num > 0)
				sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
