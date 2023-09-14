#include "main.h"
/**
 * print_square - prints a square followed by a new line
 * @size: Refers to the size of the square
 * Return - always void
 */
void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size && size > 0)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
		i++;
	}
}
