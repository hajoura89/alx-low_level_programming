#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long numdivisor = 2;

	while (numdivisor < number)
	{
		if (number % numdivisor == 0)
		{
			number /= numdivisor;
			numdivisor = 2;
		}
		else
			numdivisor++;
	}
	printf("%lu\n", number);
	return (0);
}
