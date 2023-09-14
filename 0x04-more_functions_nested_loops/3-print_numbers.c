#include "main.h"
/**
 * print_numbers - print the numbers from 0 to 9 followed by newline
 * Return: Always nothing
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}

	_putchar('\n');
}
