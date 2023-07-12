#include "main.h"

/**
 * main - Entry point that prints the minimum number of coins to make change for an amount of money.
 * @argc : Argument count
 * @argv : Argument vector
 * Return : Always 0 (success)
 */


int main(int argc, char *argv[])
{
	int x, cents, bal = 0;
	int coins[] = {25, 10, 5, 2, 1};
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");

		return (0);
	}

	for (x = 0; x < 5; x++)
	{
		while (cents >= coins[x])
		{
			bal++;
			cents -= coins[x];
		}
	}
	printf("%d\n", bal);
	return (0);
}


