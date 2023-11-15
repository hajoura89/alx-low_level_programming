#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 * using the Jump search algorithm
 * @list: the head
 * @size: size of the linked list
 * @value: the value to search for
 * Return: the address of the node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jmp, id, old_id;
	listint_t *tmp;

	jmp = (size_t)sqrt(size);
	if (!list)
		return (NULL);
	tmp = list;
	for (id = jmp; id < size - 1 + jmp; id += jmp)
	{
		old_id = id;
		if (id >= size)
		{
			old_id = id;
			id = size - 1;
		}
		while (tmp && tmp->index != id)
		{
			tmp = tmp->next;
		}
		printf("Value checked at id [%ld] = [%d]\n", tmp->index, tmp->n);
		if (value <= tmp->n || id == size - 1)
		{
			printf("Value found between ides [%ld] and [%ld]\n",
					old_id - jmp, id);
			tmp = list;
			while (tmp && tmp->index != old_id - jmp)
			{
				tmp = tmp->next;
			}
			while (tmp && tmp->index <= id)
			{
				printf("Value checked at id [%ld] = [%d]\n", tmp->index, tmp->n);
				if (value == tmp->n)
					return (tmp);
				tmp = tmp->next;
			}

		}
	}
	return (NULL);
}
