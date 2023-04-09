#include "main.h"

/**
 * isalpha - a function that checks alphabets
 *
 * Return: Always 0 (success)
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && <= 60))
		return (1);
	return (0);
}
