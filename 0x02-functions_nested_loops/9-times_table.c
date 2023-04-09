#include "main.h"

/**
 * time_table - function that prints time table
 *
 * Return: Always 0 (success).
 */

void times_table(void)
{
	int x,y,product;
	
	for (x = 0; x <=9; x++)
	{
		_putchar(48);
		for (y = 0; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			product = x * y;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48);
			_putchar((product % 10) + 48);
		}
		_putchar('\n');
	}
}
