#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *concatstr;
	unsigned int i = 0, j = 0, size1 = 0, size2 = 0;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	concatstr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (concatstr == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < size1)
		{
			concatstr[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (size1 + size2))
		{
			concatstr[i] = s2[j];
			i++;
			j++;
		}
	}
	concatstr[i] = '\0';

	return (concatstr);
}
