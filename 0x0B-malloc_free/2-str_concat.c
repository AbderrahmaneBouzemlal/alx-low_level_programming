#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: the second string
 * Return: A pointer to the result of concatenation or null if it fail
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *str;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[i - len1];
		}
	}
	return (str);
}
