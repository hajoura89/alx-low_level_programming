#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: the index, starting from 0 of the bit to set
 * Return: 1 if it worked, -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int num;

	if (index > 64)
		return (-1);
	num = index;
	for (num = index; num > 0; num--)
	{
		i *= 2;
	}

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
