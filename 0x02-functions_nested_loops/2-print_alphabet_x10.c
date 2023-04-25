#include"main.h"

/**
 *description: print_alphabet_x10 - a function that prints
 * 10 times the alphabet,in lowercase, followed by a new line.
*/

void print_alphabet_x10(void)
{
	char alphabet;

	alphabet = 'a';

	int l =0;

	while (l <= 9)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
	}
	_putchar('\n');

}
