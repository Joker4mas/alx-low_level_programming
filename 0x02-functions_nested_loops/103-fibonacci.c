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
	float total = 2;
	unsigned long x = 1, y  = 2, sum;
	
	while (1)
	{
		sum = x + y;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;
		x = y;
		y = sum;
	}
	printf("%.0f\n", total);
	return (0);	
}
