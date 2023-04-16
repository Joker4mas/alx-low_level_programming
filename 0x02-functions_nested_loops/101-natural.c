#include "stdio.h"
#include "stdlib.h"

/**
 * main - Main entry point
 *
 * program t print natural numbers
 *
 * Return: Awlays 0 (success)
 */

int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}

