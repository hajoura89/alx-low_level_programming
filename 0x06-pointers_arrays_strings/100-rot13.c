#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i, j;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;
			}
		}
	}

	return (s);
}
