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
		char c = str[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			str[i] = ((c - base + 13) % 26) + base;
		}
		i++;
	}
	return (str);
}
