#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point of the program
 * @argc: Count of the command-line arguments
 * @argv: Vector containing the command-line arguments
 *
 * Description: Calculates and prints the product of the command-line
 * arguments.
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int i, result;

	result = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int val;

			val = atoi(argv[i]);
			result *= (int)(val);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);

	return (0);
}
