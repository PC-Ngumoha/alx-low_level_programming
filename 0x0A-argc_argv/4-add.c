#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_num(char *str);

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
		if (is_num(argv[i]))
		{
			num = atoi(argv[i]);
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

/**
 * is_num - determines if a string is an integer
 * @str: string to be examined
 *
 * Return: 0 or 1
 */
int is_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (isdigit(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

