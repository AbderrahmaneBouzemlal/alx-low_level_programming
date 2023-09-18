#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: The first parameter
 * @b: The second parameter
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
