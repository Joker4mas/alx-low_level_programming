#include "stdio.h"

/**
 * main - Main entry point
 *
 * A progr that prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (successs)
 */

int main(void)
{
	int x = 0;
	long y = 1, z = 2;

	while (x < 10)
	{
		if(x == 0)
		printf("%d\n", y);
		else if (x == 1)
		printf(", %d", z);
		else
		{
			z == y;
			y = z -y;
			printf(", %d", z);
		}
		x++;
	}
	printf("\n");
	return (0);
}



