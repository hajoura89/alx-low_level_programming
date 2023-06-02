#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t
 * @head: double pointer to the list
 * @str: string to put
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlistlist;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newlist = malloc(sizeof(list_t));
	if (!newlist)
		return (NULL);

	newlist->str = strdup(str);
	newlist->len = len;
	newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (newlist);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newlist;

	return (newlist);
}
