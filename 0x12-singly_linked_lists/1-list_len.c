#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that calculate the number of elements
 * @h: A linked list
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		if (h->next == NULL)
		{
			len++;
			return (len);
		}
		h = h->next;
		len++;
	}
	return (len);
}
