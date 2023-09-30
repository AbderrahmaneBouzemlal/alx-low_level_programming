#include "main.h"
/**
 * _pow_recursion - Calculate the value of x raised to the power of y
 * @x: The base
 * @y: the exponent or the power
 * Return: The resulte of the x to the y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, --y));
	}
}
