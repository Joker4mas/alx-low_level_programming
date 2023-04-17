#include <stdio.h>

/**
 * main - Main Entry point
 *
 *  Fibonacci sequence is generated.
 *
 *  Return: Always 0 (success).
 */

int main(void)
{
	int x = 0;
	long y = 1, z  = 2, sum;

	while(y + z < 4000000)
	{
		z += y;
		if (z % 2 == 0)
		sum += z;
		y = z - y;
	}
	printf("%d", sum);
	return (0);	
}
