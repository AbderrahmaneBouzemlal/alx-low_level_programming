#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for and integer
 * @array: is the array we are going to search in it
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the index of the first elements
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
