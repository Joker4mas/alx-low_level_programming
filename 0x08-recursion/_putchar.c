#include <unistd.h>

/**
 * _putchar - fuction that writes the character c to the 
 * standard out 
 * @c: to display c
 * Return: Always 1 on succes and -1 if it encounters error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
