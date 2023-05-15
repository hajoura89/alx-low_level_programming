#include "main.h"
#include <stdlib.h>
/**
  *newstrstostr - concatenates all newstruments of the program.
  *@ac: newstrument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null,
  *Pointer to new string or NULL if it fails.
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *newstr;

	size = 0;
	i = 0;
	j = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	newstr = malloc((sizeof(char) * size) + 1);
	if (newstr == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			newstr[k] = av[i][j];
			j++;
			k++;
		}
		newstr[k] = '\n';
		k++;
		i++;
	}
	newstr[k] = '\0';
	return (newstr);
}
