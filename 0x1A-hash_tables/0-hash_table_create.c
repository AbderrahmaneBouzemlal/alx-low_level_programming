#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: The size of the hash table
 * Return: A pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
		return (NULL);
	for (; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
