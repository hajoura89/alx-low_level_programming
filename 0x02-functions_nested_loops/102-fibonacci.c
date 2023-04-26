#include "main.h"

/**
 * main -program that  prints first 50 Fibonacci numbers
 * starting with 1 and 2, followed by new line
 * Return: 0
 */

int main(void)
{
	int n;
	int counter = 50;
	long a = 1;
	long b = 2;

	for (n = 1; n <= (counter / 2); n++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (counter % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
