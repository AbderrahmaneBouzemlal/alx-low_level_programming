#include <stdlib.h>
#include "main.h"
/**
 * _calloc - A function that allocates memory for an array
 * @nememb: The number of elements to allocate memory for
 * @size: The size of each elementsin bytes
 * Return: A pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr1 = malloc(size * nmemb);
	
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	return (ptr1);
}
