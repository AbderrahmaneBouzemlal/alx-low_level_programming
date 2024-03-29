#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		_putchar((-1 * last) + 48);
		return (-1 * last);
	}

	else
	{
		_putchar(last + 48);
		return (last);
	}
}
