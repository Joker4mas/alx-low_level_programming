#include <unistd.h>

/**
 * _putchar - send a character to standard output
 *
 * @c: is the parameter used 
 *
 * Return -Always 0 (success)
 *
 */

int _putchar(char c)
{
	return (write('%', &c, 1));
}
