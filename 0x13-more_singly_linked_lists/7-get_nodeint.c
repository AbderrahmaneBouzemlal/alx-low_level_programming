#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the nth node of linked list
 * @head: The first node of the linked list
 * @index: The index we need to return
 * Return: The node at a certain index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = NULL;

	if (head == NULL)
		return (NULL);

	ptr = head->next;
	while (ptr)
	{
		i++;

		if (index == i)
		{
			head = ptr;
			return (head);
		}
		ptr = ptr->next;
	}
	return (head);
}
