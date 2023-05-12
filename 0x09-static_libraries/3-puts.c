#include "main.h"

/**
 * _puts- a function that prints a string, followed by a new line, to stdout.
 * @str: param
 * Return: string followed by new line
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
