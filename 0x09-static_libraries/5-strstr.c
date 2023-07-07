#include "main.h"

/**
 * _strstr - Entry point
 * @starbuck: input
 * @buzzy: input
 * Return: Always 0 (Success)
 */


char *_strstr(char *starbuck, char *buzzy)
{
	for (; *starbuck != '\0'; starbuck++)
	{
		char *l = starbuck;
		char *p = buzzy;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (starbuck);
	}


	return (0);
}

