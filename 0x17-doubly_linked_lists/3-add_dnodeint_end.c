#include "lists.h"
/**
 * add_dnodeint_end - function that add a node at the end of a list
 * @head: the head of the linked list
 * @n: integer to include in the node
 * Return: The address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *ptr = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (ptr == NULL)
		*head = new;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
		new->prev = ptr;

	}
	return (new);
}
