#include <stdio.h>
#include <string.h>

int validate_palind(char *s, int x1, int x2);
/**
 * is_palindrome - function the output 1 if a string
 * is palindrome and 0 if it is not a palindrome.
 * @s: string
 * Return: Always  0 (succes)
 */

int is_palindrome(char *s)
{
	return (validate_palind(s, 0, strlen(s) - 1));
}

/**
* validate_palind - function the output 1 if a string 
* is palindrome and 0 if it is not a palindrome.
* @s: string
* @x1: start
* @x2: end
* Return: Always  0 (succes)
*/

int validate_palind(char *s, int x1, int x2)
{
	if (x1 >= x2)
		return (1);
	else if (s[x1] != s[x2])
		return (0);
	else
		return (validate_palind(s, x1 + 1, x2 - 1));
}

