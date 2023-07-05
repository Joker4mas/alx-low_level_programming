#include "main.h"
#include <math.h>


/**
 * _pow_recursion - function that returns the power 
 * of a number e.g x raised to the power of y
 * @x: integer
 * @y:integer
 * Returns: always 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	esle if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y -1));
}
