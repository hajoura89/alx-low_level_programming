#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: param 1
 * @b: param 2
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

