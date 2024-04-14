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

	if (ht->size == 0)
		printf("{}");
	printf("{");
	for (; i < ht->size; ++i)
	{
		ptr = ht->array[i];
		if (ptr == NULL)
			continue;
		else
		{
			if (f == 1)
				printf(", ");
		}

		for (;;)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			if (f == 0)
				f = 1;
			if (ptr->next == NULL)
				break;
			ptr = ptr->next;

		}
	}
	printf("}\n");
}
