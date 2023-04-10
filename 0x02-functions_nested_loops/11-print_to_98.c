#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98 above or below
 *
 * @n: is a parametere used
 *
 * Return: always 0 (success).
 */

void print_to_98(int n)
{
	int number;

	if (n >= 98)
	{
		for (number = n; n > 98; number--)
		{
			printf("%d, ",number);
		}
	}
	else
	{
		for (number = n; n < 98; number++)
		{
			printf("%d, ", number);
		}
	}

	printf("98\n");
}
