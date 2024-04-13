#include "hash_tables.h"
/**
 * hash_table_set - Adds an elementto the hash table
 * @ht: The hash table to the value to
 * @key: The key
 * @value: The associated value
 * Return: 1 Succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *entry;

	if (!key || !ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}

	node->next = NULL;

	entry = ht->array[index];
	if (!entry)
	{
		ht->array[index] = node;
		return (1);
	}

	node->next = entry;
	entry = node;

	return (1);
}
