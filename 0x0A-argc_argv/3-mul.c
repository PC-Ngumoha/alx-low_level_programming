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
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", (num1 * num2));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
