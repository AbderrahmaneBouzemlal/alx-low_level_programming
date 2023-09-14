#include "main.h"
/**
 * print_line - Draw a straight line in the terminal
 * @n: The number of times the character _ should be printed
 * Returns: Always void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
