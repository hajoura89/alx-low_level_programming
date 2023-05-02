#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s:input param
 * Return: string in reverse followed by new line
 */
void print_rev(char *s)
{
	int counttoend = 0;
	int i, countback;

	for (i = 0; s[i] != '\0'; i++)
	{
		counttoend++;
	}

	for (countback = (counttoend - 1); countback >= 0; countback--)
	{
		_putchar(s[countback]);
	}
	_putchar('\n');
}
