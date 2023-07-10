#include "main.h"

/**
 * main - Entry point that prints the minimum number of coins to make change for an amount of money.
 * @argc : Argument count 
 * @argv : Argument vector
 * Return : Always 0 (success)
 */
#include <stdio.h>
#include <stdlib.h>

int calculate_min_coins(int cents) 
{
	if (cents < 0) 
	{
	return 0;
	}

	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;
	for (int i = 0; i < num_coins; i++) 
	{
        count += cents / coins[i];
        cents %= coins[i];
	}

	return count;
}

int main(int argc, char *argv[]) 
{
	if (argc != 2) 
	{
        printf("Error\n");
        return 1;
	}
	
	int cents = atoi(argv[1]);
    	int min_coins = calculate_min_coins(cents);

	printf("%d\n", min_coins);

	return 0;
}
