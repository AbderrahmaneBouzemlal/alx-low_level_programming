#include "main.h"
/**
 * _sqrt_recursion - Calculate the square root of a number
 * @n: the number
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer parameter
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
