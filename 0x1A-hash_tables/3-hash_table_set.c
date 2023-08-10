#include "hash_tables.h"

/**
 * hash_table_set - Adds  an element in a hash table
 * @ht: A pointer to the hash table
 * @key: The key to add
 * @value: The value associated with key
 * Return: Upon failure - 0 - Otherwise - 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newht;
	char *value_cpy;
	unsigned long int id, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	id = key_id((const unsigned char *)key, ht->size);
	for (i = id; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}

	newht = malloc(sizeof(hash_node_t));
	if (newht == NULL)
	{
		free(value_cpy);
		return (0);
	}
	newht->key = strdup(key);
	if (newht->key == NULL)
	{
		free(newht);
		return (0);
	}
	newht->value = value_cpy;
	newht->next = ht->array[id];
	ht->array[id] = newht;

	return (1);
}
