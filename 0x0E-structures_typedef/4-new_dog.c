#include <stdlib.h>
#include "dog.h"

/**
* _strlen - To return the length of a string
* @str: String to get the length of
* Return: length the string
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	len++;

	return (len);
}
/**
* _strcpy - To copy a string
* @dest: Destination
* @src: Source
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
/**
* new_dog - a function that creates a new dog
* @name: dog's name
* @age: dog's  age
* @owner: dog's owner
* Return: dog created
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_l = 0, own_l = 0;

	if (!name || !owner || age < 0)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
