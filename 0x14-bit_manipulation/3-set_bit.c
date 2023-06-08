#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: number
 * @index: the index, starting from 0 of the bit to set
 * Return: 1 if it worked, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > 64)
		return -1;

	while (index > 0) {
		num *= 2;
		index--;
	}

	*n += num;

	return 1;
}
