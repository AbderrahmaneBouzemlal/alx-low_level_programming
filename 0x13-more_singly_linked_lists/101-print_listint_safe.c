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

	if (head == NULL)
		exit(98);

	while (head)
	{
		printf("%d\n", head);
		head = head->next;
		i++;
	}
	return (i);
}
