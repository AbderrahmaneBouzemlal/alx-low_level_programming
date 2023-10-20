#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - A function that adds a new node at the beginning of list_t
 * @head: the first node in the list
 * @str: the string
 * Return: The address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));

	if (n == NULL)
	{
		return (NULL);
	}

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;

	n->next = *head;
	*head = n;
	return (*head);
}
