#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: A pointer to the firstBest School string
 * @s2: A pointer to the second string
 * @n: The first n bytes of s2
 * Return: A pointer to s1 followed by n bytes from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, length;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	length = len1 + n + 1;
	ptr = malloc(sizeof(char) * length);
	if (ptr == NULL)
		free(ptr);
		return (NULL);
	for (i = 0; i < length - 1; i++)
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
