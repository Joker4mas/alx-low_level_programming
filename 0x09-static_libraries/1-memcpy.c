#include "main.h"

/**
 * _memcpy - is a function that copies memory area
 * @desc: memory for storage
 * @src: memory to be copied in to
 * @n: number of bytes
 */

char *_memcpy(char *desc, char *src, unsigned int n)
{
	int x = 0;
	int i = n;


	for (; x < i; x++)
	{
		desc[x] = src[x];
		n--;
	}
	return (desc);
}

