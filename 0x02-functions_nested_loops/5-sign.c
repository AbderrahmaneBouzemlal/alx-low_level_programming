#include "main.h"
/**
 * print_sing - Prints the sign of a number
 * @c: checks if the number is positive, nigative, or zero
 * Return: 1 if it is positive
 * Return: 0 if it is zero
 * and Return -1 if is is negative
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
