#include "main.h"
#include <ctype.h>

/**
 * main - Entry point  that adds positive numbers.
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return :Always 0 (success)
 */

int main(int argc, char *argv[])
{
        int x, y, add = 0;
        if (argc <= 1)
        {
                printf("0\n");
		return (0);
        }
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '0\n'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (0);
			}
		}
		add += atoi(argv[x]);
	}
	printf("%d\n", add);
	return (0);
}
