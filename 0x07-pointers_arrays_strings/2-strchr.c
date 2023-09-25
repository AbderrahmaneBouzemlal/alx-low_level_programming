#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: The string
 * @c: The character to be found
 * Return: A pointer to the occurrence of the character or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
