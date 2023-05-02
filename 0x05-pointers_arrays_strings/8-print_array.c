#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of
 * an array of integers, followed by a new line.
 * @a: array
 * @n: length of array
 */

void print_array(int *a, int n)
{
	int c;

	c = 0;

	while (c < n)
	{
		if (c != (n - 1))
			printf("%i, ", a[c]);
		else
			printf("%i", a[c]);
		c++;
	}
	printf("\n");
}
