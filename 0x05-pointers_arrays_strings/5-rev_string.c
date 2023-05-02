#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: input param
 * Return: string in reverse followed by new line
 */
void print_rev(char *s)
{
	char revstring = s[0];
	int n = 0;
	int i;

	while (s[n] != '\0')
		n++;

	for (i = 0; i < n ; i++)
	{
		n--;
		revstring = s[i];
		s[i] = s[n];
		s[n] = revstring;
	}

}
