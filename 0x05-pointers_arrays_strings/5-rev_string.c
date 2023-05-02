#include "main.h"

/**
 * rev_string- a function that reverses a string
 * @s: input param
 * Return: reversed string
 */
void rev_string(char *s)
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
