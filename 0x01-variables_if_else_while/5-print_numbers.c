#include <stdio.h>

/**
 *main - print 0123456789
 *Description: prints all single digit numbers of base 10 starting from 0
 *Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');

	return (0);
}
