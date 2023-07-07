#include "main.h"

/***
 * _strcat - brings together two strings
 * @desc: input vales to be used
 * @src:input value
 * Return: void
 */

char *_strcat(char *desc, char *src)
{
	int i;
	int j;


	i = 0;
	while (desc[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		desc[i] = src[j];
		i++;
		j++;
	}		


	desc[i] = '\0';
	return (desc);
}

