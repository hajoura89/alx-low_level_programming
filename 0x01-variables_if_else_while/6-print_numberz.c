#include <stdio.h>

/**
 *main - print 0123456789 using putchar
 *Description: prints all single digit numbers of base 10 starting from 0
 *Return: Always 0 (Success)
*/

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
i	putchar('\n');

	return (0);
}
