#include <stdio.h>

/**
 *main - print lowercase a-z
 *Description: C program that prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
