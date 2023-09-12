#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: checks if the number is positive, negative, or zero
 * Return: 1 if it is positive and 0 is zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
