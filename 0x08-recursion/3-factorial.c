#include "main.h"

/**
 * factorial - function returns the factors of any
 * given number
 * @n: integer used
 * Return: always 0 (success)
 */

int factorial(int n)
{
	int x = 0;

	if (n < 1)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		x = n * factorial(n -1);
		return (x);
	}
}
