#include "main.h"
/**
 * _isdigit - Checks whether the input is a digit
 * @c: It is the input and it should be a character
 * Return: 0 when the input is a digit and 1 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
