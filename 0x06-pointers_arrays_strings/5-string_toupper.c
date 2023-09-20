#include <stdio.h>
#include "main.h"
/**
 * -toupper - changes all lowercase letters of string to uppercase
 *  @string: string to be in upercase
 *  Return: pointer to a string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;	
		}
	}
	return (str);
}
