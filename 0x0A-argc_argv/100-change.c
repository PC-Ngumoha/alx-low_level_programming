#include <stdio.h>
#include <stdlib.h>

int determine_coins(int cents);

/**
 * main - main entry point of the program
 * @argc: Count of command line arguments
 * @argv: Vector containing command line arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	coins = 0;
	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents > 0)
		{
			coins = determine_coins(cents);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);

	return (0);
}

/**
 * determine_coins - Determines the number of coins to give as change
 * @cents: change received
 *
 * Return: No. of coins
 */
int determine_coins(int cents)
{
	int coins;

	coins = 0;
	while (cents > 0)
	{
		if (cents / 25)
		{
			coins += cents / 25;
			cents = cents % 25;
		}
		else if (cents / 10)
		{
			coins += cents / 10;
			cents = cents % 10;
		}
		else if (cents / 5)
		{
			coins += cents / 5;
			cents = cents % 5;
		}
		else if (cents / 2)
		{
			coins += cents / 2;
			cents = cents % 2;
		}
		else if (cents / 1)
		{
			coins += cents / 1;
			cents = cents % 1;
		}
	}
	return (coins);
}

