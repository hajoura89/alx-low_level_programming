#include <stdio.h>

/**
 *main - Entry point
 *Description: Write a program that prints the alphabet in lowercase
 *Return: Always 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if ((alphabet != 'q') && (alphabet != 'e'))
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
