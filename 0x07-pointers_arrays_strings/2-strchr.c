#include <stdio.h>
#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: the string
 * @c: the character we searching for
 * Return: A pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
