#include "hash_tables.h"
/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: the hash table
 * @key: The key
 * Return: The value or NULL if not founded
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size || !ht->array[index])
		return (NULL);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
