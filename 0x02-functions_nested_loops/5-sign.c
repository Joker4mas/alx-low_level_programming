#include "main.h"

/**
 * print_sign - checks the code fo signed values
 * 
 * @n: paratmeter to be used.
 *
 * Return: Always 0 (success).
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}

}
