#include "main.h"

/**
 * _memset - fils a block of memory with a specific values
 * @s: string of the address memory to be filled
 * @b: the values to be in the memory
 * @n: number of bytes to be changes
 * Return: value of the new item
 */

char*_memset(char*s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
