#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: first node in the linked list
 * Return: the sum, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
