#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: The first Node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int d;

	if (head == NULL)
		exit(98);

	while (head)
	{
		d = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, (head)->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *) head->next, head->next->n);
			break;
		}
	}
	return (i);
}
