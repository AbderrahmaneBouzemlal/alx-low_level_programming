#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings
 * @n: the number of bytes
 * @src: a pointer to a string which will take the bytes
 * @dest: A pointer to a string result of contenation
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, lend = 0, i;

	while (dest[lend] != '\0')
	{
		lend++;
	}

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n; i++)
	{
		dest[lend + i] = src[i];
		if (i == len)
		{
			dest[lend + i] = '\0';
			break;
		}
	}
	return (dest);
}
