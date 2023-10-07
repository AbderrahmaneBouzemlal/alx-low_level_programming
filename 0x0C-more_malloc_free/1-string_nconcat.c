#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i = 0;
		while (string[i] != '\0')
			i++;
	return (i);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: A pointer to the firstBest School string
 * @s2: A pointer to the second string
 * @n: The first n bytes of s2
 * Return: A pointer to s1 followed by n bytes from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, length;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < 0)
		return (NULL);
	if (n >= len2)
		n = len2;
	length = len1 + n + 1;
	ptr = malloc(sizeof(char) * length);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		if (s1[i] != '\0')
		{
			ptr[i] = s1[i];
		}
		else if (s1[i] == '\0')
		{
			ptr[i] = s2[i - len1];
		}
		if (i > len1)
		{
			ptr[i] = s2[i - len1];
		}
	}
	ptr[length] = '\0';
	return (ptr);
}
