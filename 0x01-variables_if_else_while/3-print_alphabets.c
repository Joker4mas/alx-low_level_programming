#include <stdio.h>

/**
 * main - Entry point
 *
 * A program to print both lowercase and upperscase letters
 *
 * Return: always 0 (Success)
 * 
*/
 int main(void)

 {
	char ch = 'a';
        char CH = 'A';
	
	//To print lower case
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		++ch;
	}
	putchar('\n');
	return (0);
 }
