#include "main.h"

/**
 * _isupper- prints upper case letter
 * @c:character to check
 * Return: always 0 (success)
 */

int _isupper(int c)
{
	if ( c>= 'A' && c <= 'Z')
		return(1);
	else
		return (0);
}
