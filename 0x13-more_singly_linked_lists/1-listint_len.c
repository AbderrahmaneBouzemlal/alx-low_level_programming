#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: The linked list
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->next == NULL)
		{
			count++;
			return (count);
		}
		h = h->next;
		count++;
	}
	return (count);
}
