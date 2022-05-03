#include <stdio.h>

/**
 * main - main entry point of the program
 * @argc: Count of all the command-line arguments
 * @argv: Vector containing all the command-line argumnents
 *
 * Description: This program prints out the number of command-line arguments
 * to the screen
 * Return: Always 0 (Successful)
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", (argc - 1));

	return (0);
}
