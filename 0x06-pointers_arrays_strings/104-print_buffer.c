#include "main.h"
#include <stdio.h>
/**
 * isPrintableASCII- to determine if ch is a printable ASCII char
 * @ch: param
 * Return: 1 if true, 0 if false
*/
int isPrintableASCII(int ch)
{
	return (ch >= 32 && ch <= 126);
}

/**
 * printHexes- to print hex value for ch string in a formatted form
 * @ch: the string param to print
 * @begin : the starting position
 * @end: the ending position
 */
void printHexes(char *ch, int begin, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(ch + begin + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII- to print ASCII value for ch string
 * formatted to replace nonprintable chars with "."
 * @ch: string to print
 * @begin: the starting position
 * @end: the endinf position
 */
void printASCII(char *ch, int begin, int end)
{
	int c, i = 0;

	while (i < end)
	{
		c = *(ch + i + begin);
		if (!isPrintableASCII(c))
			c = 46;
		printf("%c", c);
		i++;
	}
}

/**
 * print_buffer- a function that prints a buffer
 * @b: buffer to print
 * @size: size of the buffer
 * Return: void
*/
void print_buffer(char *b, int size)
{
	int begin, end;

	if (size > 0)
	{
		for (begin = 0; begin < size; begin += 10)
		{
			end = (size - begin < 10) ? size - begin : 10;
			printf("%08x: ", begin);
			printHexes(b, begin, end);
			printASCII(b, begin, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
