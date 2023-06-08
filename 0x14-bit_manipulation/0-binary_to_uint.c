#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: converted number or 0 if b is null or unconvertible char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, mult;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	mult = 1;
	sum = 0;

	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += mult;
		}
		mult *= 2;
	}

	return (sum);
}
