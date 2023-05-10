#include "main.h"

int square(int n, int val);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square(n, 0));
}

/**
 * square - to find the natural square root of a number
 * @n: number to calculate the sqaure root of
 * @val: iterator
 * Return: the resulting square root
 */
int square(int n, int val)
{
	if (val * val > n)
		return (-1);
	if (val * val == n)
		return (val);
	return (square(n, val + 1));
}
