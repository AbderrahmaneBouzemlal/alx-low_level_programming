#include "main.h"
/**
 * _isalpha - checks for alphabitic character
 * @c: checks if the character is an alphabitic character
 * Return: 1 if the c is letter otherwise 0 
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
