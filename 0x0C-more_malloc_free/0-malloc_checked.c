#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: unsigned integer that refers to the number of the bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
