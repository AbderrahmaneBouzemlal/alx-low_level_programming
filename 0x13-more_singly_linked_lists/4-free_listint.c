#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: Is a pointer to the linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr)
	{
		listint_t *next = ptr->next;
		free(ptr);
		ptr = next;
	}
}
