#include <stdio.h>

/**
 * main - Main entry point
 *
 * A progr that prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (successs)
 */

int main(void)
{
    int x;
    unsigned long y = 1, z = 2, total;

    printf("%lu, %lu", y, z);

    for (x = 2; x < 50; x++)
    {
        total = y + z;
        printf(",");
        printf(" ");
        printf("%lu", total);
        y = z;
        z = total;
    }
    printf("\n");
    return (0);
}




