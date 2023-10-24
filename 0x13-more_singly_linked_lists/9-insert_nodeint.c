#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: the address of the first node of the list
 * @idx: The index of the list where the new node should be added
 * @n: The integer that the node contain as data
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *ptr = *head;
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (ptr && x < idx - 1)
	{
		ptr = ptr->next;
		x++;
	}

	if (ptr == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = ptr->next;
	ptr->next = node;

	return (node);
}
