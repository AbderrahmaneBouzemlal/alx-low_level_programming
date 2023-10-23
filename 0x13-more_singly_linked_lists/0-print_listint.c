#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print all the elements of listint_t list
 * @h: The linked lists
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
