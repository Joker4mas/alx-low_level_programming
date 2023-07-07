#include <unistd.h>

/**
 * _putchar - displays the character c to the output
 * @c: character to be displayed
 * Return:always 0 (success)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
