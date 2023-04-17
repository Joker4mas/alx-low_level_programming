#include <stdio.h>

/**
 * main - Main entry point
 *
 * Return: Always 0 (success).
 */

int main(void)
{
	int x;
	unsigned long int y = 1, z = 2, total;

	printf("%lu, %lu", y, z);

	for (x = 3; x <= 98; x++)
	{
		total = y + z;
		if (x != 98)
		{
			printf(",");
			printf(" ");
		}
		printf("%lu", total);
		y = z;
		z = total;
	}
	printf("\n");
	return (0);
}
