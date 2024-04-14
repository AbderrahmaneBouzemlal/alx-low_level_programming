#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int f = 0;
	hash_node_t *ptr;

	if (!ht)
		return;
	printf("{");
	for (; i < ht->size; ++i)
	{
		ptr = ht->array[i];

		while (ptr)
		{
			if (f)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			ptr = ptr->next;
			f = 1;

		}
	}
	printf("}\n");
}
