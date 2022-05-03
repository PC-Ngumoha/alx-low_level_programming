#include <stdio.h>

/**
 * main - main entry point of the program
 * @argc: Count of the command-line arguments
 * @argv: Vector containing the command-line arguments
 *
 * Description: Prints all the command-line arguments to the screen
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
