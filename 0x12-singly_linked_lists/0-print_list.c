#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elments of a linked list
 * @h: a singly linked list to be printed
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);

}
