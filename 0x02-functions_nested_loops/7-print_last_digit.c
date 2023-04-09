#include "main.h"

/**
 * print_last_digit - function that prints ut the last digit
 *
 * Return: Always 0 (success).
 */

int  print_last_digit(int n)
{
	int last = n % 12;
	if (last < 0)
	{
		last = 0 - last;
	}
	_putchar(last + '0);
	return (last);
}
