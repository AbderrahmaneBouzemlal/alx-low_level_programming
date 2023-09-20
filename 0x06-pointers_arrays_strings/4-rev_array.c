#include <stdio.h>
#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array
 * @a: The arrays to be reversed
 * @n: The number of elements of the array
 * Return: Always void
 */
void reverse_array(int *a, int n)
{
	int k;
	int temp;

	if (n % 2)
	{
		for (k = 0; k < n / 2; k++)
		{
			temp = a[k];
			a[k] = a[n - k - 1];
			a[n - k - 1] = temp;
		}
	}

	else
	{
		for (k = 0; k < (n / 2) - 1; k++)
		{
			temp = a[k];
                        a[k] = a[n - k - 1];
                        a[n - k - 1] = temp;
		}
	}
}
