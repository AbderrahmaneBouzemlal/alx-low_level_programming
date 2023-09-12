#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 is c is lowecase
 * Return otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}	
