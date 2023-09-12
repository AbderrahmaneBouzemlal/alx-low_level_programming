#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *@n: takes an integer as an input
 * Return: the absolute number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}
