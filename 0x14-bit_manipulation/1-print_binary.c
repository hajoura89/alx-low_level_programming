#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print as binary
 */
void print_binary(unsigned long int n)
{
	int shift = 0;
    unsigned long int num = n;

	if (n == 0)
    {
        printf("0");
        return;
    }

    while ((num >>= 1) > 0)
    {
        shift++;
    }

    for (; shift >= 0; shift--)
    {
        if ((n >> shift) & 1)
            printf("1");
        else
            printf("0");
    }
}
