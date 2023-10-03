#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: The first element of the array
 * Return: Pointer to the arrays or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
