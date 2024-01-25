#include "lists.h"
/**
 * get_dnodeint_at_index - function that find the nth node
 * @head: the first node in a list
 * @index: index of node
 * Return: the address of the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
