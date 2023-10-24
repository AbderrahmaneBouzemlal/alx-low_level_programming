#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function caluculate the sum of a data in linked list
 * @head: The first node in the linked list
 * Return: The result of the calculation
 */
int sum_listint(listint_t *head)
{
	int sum = 0, n = 0;

	while (head)
	{
		n = head->n;
		sum += n;
		head = head->next;
	}
	return (sum);

}
