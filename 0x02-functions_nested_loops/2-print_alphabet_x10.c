#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabets 10 times
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet_x10(void)
{
	int j;
	char x;

	for (j = 0; j < 10; j++)

	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}

}
