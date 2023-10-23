#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: the address of the first element
 * @n: The integer to be added to the node
 * Return: The addres of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *tmp;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = node;
	return (node);
}
