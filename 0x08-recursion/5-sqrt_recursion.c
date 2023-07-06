#include "main.h"

int actual_sqrt(int n, int k);

/**
 * _sqrt_recursion - function returns thr square root 
 * of a numbers.
 * Return: always 0 (success)
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}


/**
 * _sqrt_recursion - function returns the square
 * root of a numbers.
 * Return: always 0 (success)
 */

 int actual_sqrt(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (1);
	return (actual_sqrt(n, k + 1));
}
