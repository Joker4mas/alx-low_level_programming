#include "main.h"
#include <ctype>

/**
 * main - Entry point  that adds positive numbers.
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return :Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int x,i, sum =0;
	if (argc <=1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (i = 0; argv[x][i] != '\0')
		{
			if (isdigit(argv[x][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	prinf("%d\n", sum);
	return (0);
}
