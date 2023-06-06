#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n1 = 0;

	while (h)
	{
		n1++;
		h = h->next;
	}

	return (n1);
}
