#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: The array of integers
 * @n: The number of elements to be printed
 * Return: Always void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != '\0' && i < n)
	{
		if (i == n - 1)
		{
			printf("%i\n", a[i]);
		}
		printf("%i, ", a[i]);
		i++;
	}
}
