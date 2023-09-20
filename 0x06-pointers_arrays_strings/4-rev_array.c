#include <stdio.h>
#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array
 * @a: The arrays to be reversed
 * @n: The number of elementsof the array
 * Return: Always void
 */
void reverse_array(int *a, int n)
{
	int k;
	int temp;

	for (k = 0; k < n / 2; k++)
	{
		if (n % 2 == 1 && k == (n / 2) - 1)
		{
			continue;
		}
		temp = a[k];
		a[k] = a[n - k - 1];
		a[n - k - 1] = temp;
	}
}
