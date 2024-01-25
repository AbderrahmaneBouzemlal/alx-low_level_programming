#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: the first node on the list
 * @idx: the index
 * @n: the integer on the node inserted
 * Return: the address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *ptr;
	dlistint_t *current;

	if (h == NULL)
		return (NULL);

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;
	current = *h;

	while (current)
	{
		if (!current->next && count == idx - 1)
			return (add_dnodeint_end(h, n));
		else if (count == idx - 1)
		{
			ptr->next = current->next;
			ptr->prev = current;
			current->next->prev = ptr;
			current->next = ptr;
			return (ptr);
		}
		count++;
		current = current->next;
	}
	free(ptr);
	return (NULL);
}
