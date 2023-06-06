#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the first node of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *tmp1 = NULL;
	size_t c = 0;
	size_t n1;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		c++;
		tmp = tmp->next;
		tmp1 = head;
		n1 = 0;
		while (n1 < c)
		{
			if (tmp == tmp1)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (c);
			}
			tmp1 = tmp1->next;
			n1++;
		}
		if (!head)
			exit(98);
	}
	return (c);
}
