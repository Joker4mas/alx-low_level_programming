#include <stdio.h>

/**
 * print_to _98 - prints all natural numbers from n to 98
 *
 * Return: always 0 (success).
 */

void print_to _98(int n)
{
	if (n >= 98)
	{
		whhile (n > 98)
			printf("%d,", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d,", n++);
		printf("%d\n", n);
	}
}
