#include "main.h"
/**
 * print_alphabet - function that print alphabets, in lower case
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)

	{
		_putchar(n);
	}
	_putchar('\n');
}
