#include  "main.h"

/**
 * main - Entry point
 * @argc : argument count
 * @argv : argument vector
 * Reeturn : Awlays 0 (success)
 */

int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
