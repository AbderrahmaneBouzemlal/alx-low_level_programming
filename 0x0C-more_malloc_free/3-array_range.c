#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: The smallest number and the first
 * @max: The biggest number and the last
 * Return: A pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i = 0;
	void *byte_ptr;
	int *ptr;
	int len;

	if (min == max)
	{
		return (NULL);
	}
	len = max - min + 1;
	byte_ptr = malloc(sizeof(int) * len);
	if (byte_ptr == NULL)
		return (NULL);
	ptr = byte_ptr;
	while (min < max + 1)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
