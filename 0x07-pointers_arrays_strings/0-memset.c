#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: A Pointer which points to the memory to be filled
 * @b: The info to be filled in place of the previous one
 * @n: The number of bytes to be filled
 * Return: The memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
