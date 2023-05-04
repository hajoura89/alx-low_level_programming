#include "main.h"
/**
 * print_line - a function that prints size bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 * Return: void
*/
void print_line(char *c, int s, int l)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		if (i <= s)
			printf("%02x", c[l * 10 + i]);
		else
			printf("  ");
		if (i % 2)
			putchar(' ');
	}
	for (j = 0; j <= s; j++)
	{
		if (c[l * 10 + j] > 31 && c[l * 10 + j] < 127)
			putchar(c[l * 10 + j]);
		else
			putchar('.');
	}
}
/**
 * print_buffer - a function that prints a buffer
 * @b: buffer to print
 * @size: size of the buffer
 * Return: void
*/
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
