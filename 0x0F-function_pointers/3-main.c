#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point of the program
 * @argc: count of command line arguments
 * @argv: vector containing command line arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*f)(int, int); /*pointer to a function*/

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = (char *)argv[2];

	f = get_op_func(operator);
	if (f == NULL) /*Operator not found*/
	{
		printf("Error\n");
		exit(99);
	}

	result = f(num1, num2);
	if (result == -1)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", result);
	return (0);
}
