#include "lists.h"
/**
 * sum_dlistint - calculate the sum of all the dataof a list
 * @head: the beginning of the list
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
