#include "main.h"
#include <stdlib.h>
void *copy_allocate(void *ptr, unsigned int old_size, unsigned int new_size);
/**
 * copy_allocate - reallocates a memory block
 * @ptr: Is a pointer to the memory previously allocated
 * @old_size: Is the size of the allocated space for ptr
 * @new_size: Is the new size of the new memory block
 * Return: A pointer to the new allocated memory block
 */
void *copy_allocate(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *rptr;
	char *byte_ptr;
	char *byte_rptr;

	rptr = malloc(new_size);
	if (rptr == NULL)
	{
		return (NULL);
	}

	byte_ptr = ptr;
	byte_rptr = rptr;

	for (i = 0; i < old_size; i++)
	{
		byte_rptr[i] = byte_ptr[i];
	}
	for (; i < new_size; i++)
	{
		byte_rptr[i] = 0;
	}
	return (rptr);
}

/**
 * _realloc - Reallocates a memory block
 * @ptr: Is a pointer to the memory previously allocated
 * @old_size: Is the size of the allocated space for ptr
 * @new_size: Is the new size of the new memory block
 * Return: A pointer to the new allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *byte_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		byte_ptr = malloc(new_size);
		if (byte_ptr == NULL)
			return (NULL);
		return (byte_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		byte_ptr = malloc(new_size);
		if (byte_ptr == NULL)
			return (NULL);
		return (byte_ptr);
	}

	if (old_size == 0)
		ptr = malloc(new_size);

	if (new_size != old_size && ptr != NULL)
	{
		ptr = copy_allocate(ptr, old_size, new_size);
	}

	return (ptr);
}
