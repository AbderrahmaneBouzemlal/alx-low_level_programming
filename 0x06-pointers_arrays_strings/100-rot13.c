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
		while ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') ||
					(str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] += 13;
			}
			str[i] -= 13;
			i++;
		}
		i++;
	}
	return (str);
}
