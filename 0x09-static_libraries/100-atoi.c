#include "main.h"

/**
 * _atoi - a functon that converts a string to an integer
 * @s: string param
 * Return: string converted to integers
 */

int _atoi(char *s)
{
	int num, length, count, mult, x, n;

	length = 0;
	x = 0;
	count = 0;
	mult = 1;
	n = 1;
	num = 0;

	while (s[length] != '\0')
	{
		if (s[length] >= '0' && s[length] <= '9')
		{
			count++;
			if (!(s[length + 1] >= '0' && s[length + 1] <= '9'))
				break;
		}
		length++;
	}
	for (; count > 1; count--)
		mult *= 10;
	for (; x <= length; x++)
	{
		if (s[x] == '-')
			n *= -1;
		else if (s[x] <= '9' && s[x] >= '0')
		{
			num += (s[x] - '0') * mult * n;
			mult /= 10;
		}
	}
	return (num);
}
