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
	int n = 0;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	ptr = (*head)->next;

	free(*head);
	*head = ptr;
	return (n);
}
