#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function prints a string
 * in reverse.
 * @s: string
 * Return: always 0 (success)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
