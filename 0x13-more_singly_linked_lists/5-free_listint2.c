#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: The address of the First node in the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = NULL;
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;

		free(*head);
		*head = ptr;
	}
}
