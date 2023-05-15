#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: pointer to the duplicated string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dupstr;
	unsigned int i, size;

	i = 0;
	size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	dupstr = malloc(sizeof(char) * (size + 1));

	if (dupstr == NULL)
		return (NULL);

	while ((dupstr[i] = str[i]) != '\0')
		i++;

	return (dupstr);
}
