#include <stdio.h>

/**
 * main - main entry point of the program
 * @argc: Count of command-line arguments
 * @argv: Vector containing command-line arguments.
 *
 * Description: This program prints it's name to the screen
 * Return: Always 0 (Successful)
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
