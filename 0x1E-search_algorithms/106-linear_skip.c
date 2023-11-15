#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: head of the list
 * @value: value to search for
 * Return: a pointer to the first node where value is, or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp_list, *node;
	size_t old_id;

	if (!list)
		return (NULL);

	for (tmp_list = list; tmp_list; tmp_list = tmp_list->express)
	{
		if (tmp_list->express)
		{
			node = tmp_list->express;
			printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		}
		else
		{
			node = tmp_list;
			while (node->next)
				node = node->next;
		}

		if (value <= node->n || !(tmp_list->express))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					tmp_list->index, node->index);
			old_id = node->index;
			for (node = tmp_list; node && node->index <= old_id; node = node->next)
			{
				printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
				if (value == node->n)
					return (node);
			}
		}
	}
	return (NULL);
}
