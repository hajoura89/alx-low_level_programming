#include "main.h"

int check_prime(int n, int val);

/**
 * is_prime_number - check if an integer is a prime number or not
 * @n: number to check
 * Return: 1 if n is a prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - calculates if a number is prime
 * @n: number to evaluate
 * @val: iterator
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int val)
{
	if (val == 1)
		return (1);
	if (n % val == 0 && val > 0)
		return (0);
	return (check_prime(n, val - 1));
}
