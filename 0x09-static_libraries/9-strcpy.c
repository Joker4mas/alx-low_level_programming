		
#include "main.h"
		
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @desc: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *desc, char *src)
{
	int l = 0;
	int x = 0;


	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		desc[x] = src[x];
	}
	desc[l] = '\0';
	return (desc);
}

