#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: the input for this function is alphabitical character 
 * Return: when the input is uppercase 1 and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
