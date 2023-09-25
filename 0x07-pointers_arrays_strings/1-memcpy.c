#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: a pointer which point to the destination of copying the memory
 * @src: A pointer which point to the source of the memory
 * @n: The number of memory bytes to be copied
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
