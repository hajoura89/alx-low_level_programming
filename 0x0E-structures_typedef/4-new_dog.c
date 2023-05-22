#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - a function that creates a new dog
  * @name: dog's name
  * @age: dog's  age
  * @owner: dog's owner
  *
  * Return: the dog created
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name != NULL && owner != NULL)
	{
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);

		dog->name = malloc(sizeof(char) * _strlen(name) + 1);

		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

		dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);

		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;
	}

	return (dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to get the  length of
  *
  * Return: length of  the  string
  */
int _strlen(char *str)
{
	int len = 0;

	for (; *str != '\0'; str++)
	{
		len++;
	}

	return (len);
}

/**
  * _strcpy - Copy a string
  * @dest: destination
  * @src: source
  *
  * Return: the pointer to destination
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
