#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a n1 node at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the n1 node is inserted
 * @n: data to insert in the n1 node
 * Return: address of the n1 node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *n1;
	listint_t *tmp = *head;

	n1 = malloc(sizeof(listint_t));
	if (!n1 || !head)
		return (NULL);

	n1->n = n;
	n1->next = NULL;

	if (idx == 0)
	{
		n1->next = *head;
		*head = n1;
		return (n1);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			n1->next = tmp->next;
			tmp->next = n1;
			return (n1);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
