#include "main.h"

/**
 * main - Entry poin that prints all arguments it receives.
 * @argc : Argument count
 * @argv : Argument vector
 * Return : Always 0(success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%d: %s\n", argv[x]);
	}
	return (0);
}
