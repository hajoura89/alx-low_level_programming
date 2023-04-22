#include <stdio.h>

/**
 *main - Entry Point
 *Description: prints the lowercase alphabet in reverse
 *Return: Always 0 (Success)
*/

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
