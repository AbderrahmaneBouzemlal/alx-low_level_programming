#include <stdio.h>
#include "function_pointers.h"
/**
 * array_literator - excutes a function
 * @size: is the size of the array
 * @action: The function to be excuted
 * Return: NOTHING (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
