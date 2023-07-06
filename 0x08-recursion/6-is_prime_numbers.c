#include "main.h"

int is_prime_number(int n,int x);

/**
 * is_prime_numbers  - function that returns 1  when 
 * the input integer is a prime number
 * @n: integer
 * Retuen: Always 0 (success)
 */

int is_prime_number(int n)
{
	if  (n <= 1)
	{
		return (0);
	}
	esle 
		return (is_prime_nmuber(n, n - 1));

}

/**
 * is_prime_numbers  - function that returns 1  when
 * the input integer is a prime number
 * @n: integer
 * Retuen: Always 0 (success)
 */

int is_prime_number(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	esle if (n % x == 0)
	{
		return (0);
	}
	else
		return (is_prime_number(n, x - 1));
}






