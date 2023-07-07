#include "main.h"

/**
 * _strchr - entry pont of a string
 * @s: input
 * @a: input
 * Return: always 0 (success)
 */

char *_strchr(char *s, char a)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == a)
			return (&s[i]);
	}
	return (0);
}

