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
	if (!key || !ht)
		return (0);
	unsigned long int index = key_index(key, ht->size);

	hash_node_t *node = malloc(sizeof(hash_node_t));
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

	hash_node_t *entry = ht->array[index];
	if (!entry)
	{
		ht->array[index] = node;
        	return (1);
	}

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
            		free(entry->value);
			entry->value = strdup(value);
			if (!entry->value)
			{
				free(node->key);
				free(node->value);
				free(node);
				return (0);
			}
			free(node->key);
			free(node->value);
			free(node);
			return (1);
		}
		entry = entry->next;
	}

	entry = ht->array[index];
	while (entry->next != NULL)
		entry = entry->next;
	entry->next = node;

	return (1);
}
