#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: A Pointer to a string that contain the copy of the source
 * @src: A Pointer to a string that will be copied
 * @n: The number of bytes to be copied
 * Return: Apointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
