#include "main.h"
/**
 * factorial - Calculate the factorial  of a given number
 * @n: A number integer
 * Return: The result of the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
