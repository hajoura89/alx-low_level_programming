#include "main.h"

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int c, o;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum = 0;
	long a_h, a_t, b_h, b_t, sum_h, sum_t;

	printf("1");

	for (c = 2; c < 93; c++) /* will still print */
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	a_h = a / 1000000000; /* break larger num into 2 parts */
	a_t = a % 1000000000;
	b_h = b / 1000000000;
	b_t = b % 1000000000;

	for (; c < 99; c++)
	{
		o = (a_t + b_t) / 1000000000;
		sum_t = (a_t + b_t)-(1000000000 * o);
		sum_h = (a_h + b_h) + o;

		printf(", %lu%lu", sum_h, sum_t);

		a_h = b_h;
		a_t = b_t;
		b_h = sum_h;
		b_t = sum_t;
	}


	printf("\n");

	return (0);
}
