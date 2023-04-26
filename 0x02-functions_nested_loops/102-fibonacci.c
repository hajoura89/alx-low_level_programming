#include "main.h"

/**
 * main -program that  prints first 50 Fibonacci numbers
 * starting with 1 and 2, followed by new line
 * Return: 0
 */

int main(void)
{
	long a = 0;
	long b = 1;
	int n = 0;
	long fibonacci;

	while (n < 50)
	{
		fibonacci = b + a;
		if (n != 49)
			printf("%ld, ", fibonacci);
		else
			printf("%ld\n", fibonacci);
		a = b;
		b = fibonacci;
		n += 1;
	}
	return (0);
}
