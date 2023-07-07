#include "main.h"

/**
 * _strncpy - function to copy a string
 * @desc: input value
 * @src: input value
 * @n: input value
 *
 * Return: desc
 */
char *_strncpy(char *desc, char *src, int n)
{
	int j;


	j = 0;
	while (j < n && src[j] != '\0')
	{
		desc[j] = src[j];
		j++;
	}
	while (j < n)
	{
		desc[j] = '\0';
		j++;
	}


	return (desc);
}

