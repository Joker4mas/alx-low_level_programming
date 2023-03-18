#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main (void)
{
	printf("The size of char is:`%d` byte(s)\n", sizeof(char));
	printf("The size of an int:`%d` bytes(s)\n", sizeof(int));
	printf("The size of a float:`%d` bytes(s)\n", sizeof(float));
	printf("The size of a long long int:`%d` bytes(s)\n", sizeof(long long int));
	printf("The size of a long int:`%d` bytes(s)\n", sizeof(long int));

	return (0);
}

