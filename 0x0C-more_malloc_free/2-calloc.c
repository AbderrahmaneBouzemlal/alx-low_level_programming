#include <stdlib.h>
#include "main.h"
/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: The number of elements to allocate memory for
 * @size: The size of each elementsin bytes
 * Return: A pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int total = size * nmemb;
	void *ptr1 = malloc(total);
	char *byte_ptr = ptr1;
	int v;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr1 == NULL)
	{
		return (NULL);
	}

	for (v = 0; v < total; v++)
	{
		byte_ptr[v] = 0;
	}

	return (ptr1);
}
