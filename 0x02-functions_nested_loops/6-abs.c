#include "main.h"

/**
 * _abs - function that computes absolute value
 *
 * @x: is the parameter used. 
 *
 * Return: Always 0 (success)
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = 0 - x;
	}

	return (x);
}
