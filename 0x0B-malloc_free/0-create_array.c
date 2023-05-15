#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array c
 * Return: pointer to the array (Success),Or NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);
	while (size--)
		p[size] = c;
	return (p);
}
