#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses the linked lists
 * @head: The first node in the linked list
 * Return: The liked list in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *crr = NULL;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (NULL);

	crr = *head;
	while (crr)
	{
		next = crr->next;
		crr->next = prev;
		prev = crr;
		crr = next;
	}
	*head = prev;
	return (*head);
}
