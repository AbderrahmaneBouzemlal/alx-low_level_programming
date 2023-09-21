#include "main.h"
/**
 * rot13 - endodes a string using rot 13
 * @str: The plaintext to be encoded
 * Return: A pointer to a string resulting from encoding
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
		}
		else if ((str[i] > 'M' && str[i] <= 'Z') || (str[i] > 'm' && str[i] <= 'z'))
		{
			str[i] -= 13;
		}
		i++;
	}

	return (str);
}
