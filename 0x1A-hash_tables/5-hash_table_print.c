#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash tables
 * @ht: A pointer to the hash table to print
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table
 *				If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *htnode;
	unsigned long int i;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");

			htnode = ht->array[i];
			while (htnode != NULL)
			{
				printf("'%s': '%s'", htnode->key, htnode->value);
				htnode = htnode->next;
				if (htnode != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
