#include "main.h"

/**
 * main - Entry point that multiplies two numbers
 * @argc : Argumrnt count
 * @argv : Argument vector
 * Return : Awalys 0 (success)
 */


int main(int argc, char  *argv[])
{
	int x, mult;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
		for (x = 1; x < argc; x++)
		{
			mult *= atoi(argv[x]);
		}
	return (0);
}
