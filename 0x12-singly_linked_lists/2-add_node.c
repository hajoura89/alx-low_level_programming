#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;
	unsigned int len = 0;

	while (str[len])
		len++;

	newlist = malloc(sizeof(list_t));
	if (!newlist)
		return (NULL);

	newlist->str = strdup(str);
	newlist->len = len;
	newlist->next = (*head);
	(*head) = newlist;

	return (*head);
}
