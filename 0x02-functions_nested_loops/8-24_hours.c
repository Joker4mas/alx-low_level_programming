#include "main.h"

/**
 * jack_bauer - function that prints time
 *
 * Return: Always 0 (success).
 *
 */

void jack_bauer(void)
{
	int x,y;
	
	for (x = 0; x <= 24; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar (x / 10 + '0');
			_putchar (x % 10 + '0');
			_putchar (':');
			_putchar (y / 10 + '0');
			_putchar (y % 10 + '0');
			_putchar ('\n');
		}
	}	

}
