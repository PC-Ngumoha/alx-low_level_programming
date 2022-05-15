#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point into the program
 * @argc: number of command line arguments
 * @argv: vector containing command line arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int bytes;
	char *arr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
