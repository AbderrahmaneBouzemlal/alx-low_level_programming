#include "lists.h"
/**
 * add_dnodeint - add a node to a a linked list
 * @head: the head of the list
 * @n: the number to be added
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (head == NULL)
		return (NULL);

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;

	return (*head);
}
