#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: points to the beginning of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;

	while (head)
	{
		ptr = head;
		free(ptr);
		head = head->next;
	}
}
