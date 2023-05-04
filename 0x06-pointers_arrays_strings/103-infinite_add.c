#include "main.h"
/**
 * rev_string - a function that reverse array
 * @n: integer param
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tmp;
	}
}

/**
 * infinite_add - a function that adds 2 numbers together
 * @n1: number 1 to add
 * @n2: number 2 to add
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o = 0, i = 0, j = 0, dg = 0;
	int value1 = 0, value2 = 0, tmp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || o == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (j < 0)
			value2 = 0;
		else
			value2 = *(n2 + j) - '0';
		tmp = value1 + value2 + o;
		if (tmp >= 10)
			o = 1;
		else
			o = 0;
		if (dg >= (size_r - 1))
			return (0);
		*(r + dg) = (tmp % 10) + '0';
		dg++;
		j--;
		i--;
	}
	if (dg == size_r)
		return (0);
	*(r + dg) = '\0';
	rev_string(r);
	return (r);
}
