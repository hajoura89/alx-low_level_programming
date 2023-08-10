#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: A pointer to the hash table
 * @key: The key to get the value of
 * Return: If the key cannot be matched - NULL
 *         Otherwise - the value associated with key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int id;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	id = key_index((const unsigned char *)key, ht->size);
	if (id >= ht->size)
		return (NULL);

	node = ht->array[id];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
