#include "main.h"
/**
 * print_most_numbers - Prints numbers between 0 and 9 except 2 and 4
 * Return: Always void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + 48);
	}
	_putchar('\n');
}
