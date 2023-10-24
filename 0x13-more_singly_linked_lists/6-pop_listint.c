#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a list
 * @head: The address of the first node
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	size_t n = (*head)->n;
	listint_t *ptr;

	ptr = NULL;

	if (head == NULL)
		return (0);
	ptr = (*head)->next;

	if (ptr == NULL)
		return ((*head)->n);

	free(*head);
	*head = ptr;
	return (n);
}
