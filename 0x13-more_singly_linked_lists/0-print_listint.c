#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: linked list to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n1 = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n1++;
		h = h->next;
	}

	return (n1);
}
