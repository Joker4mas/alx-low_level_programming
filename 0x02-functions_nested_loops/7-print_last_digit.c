#include "main.h"

/**
 * print_last_digit - function that prints ut the last digit.
 *
 * @n: is the parameter used.
 *
 * Return: Always 0 (success).
 */

int  print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = 0 - last;
	}
	_putchar(last + '0');
	return (last);
}
