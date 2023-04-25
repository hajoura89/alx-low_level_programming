#include"main.h"

/**
 *description: print_alphabet_x10 - a function that prints
 * 10 times the alphabet,in lowercase, followed by a new line.
*/

void print_alphabet_x10(void)
{
	char alphabet;

	int l;

	for (l = 0; l <= 9; l++)
	{
		for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		 _putchar('\n');
	}
}
