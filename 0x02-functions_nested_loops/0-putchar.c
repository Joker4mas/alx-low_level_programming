#include "main.h"

/**
 * main - Main Entry point
 *
 * Return - Alaways  0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int n;
	int getlen = strlen(str);

	for (n = 0; n < getlen; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
	return (0);
}
