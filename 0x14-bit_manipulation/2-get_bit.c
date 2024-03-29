#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: A number
 * @index: Is the index of the bit
 * Return: The number at that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
