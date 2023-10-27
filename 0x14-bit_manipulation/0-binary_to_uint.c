#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsinged int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: the converted number or 0 if it unsuccesful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	int s = 0;
	unsigned int binary = 0;

	if (!b)
		return (0);

	while (b[s])
		s++;
	for (i = s; b[i - 1] != '\0'; i--)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);
		binary = b[i - 1] - '0';
		num += binary << (s - i);
	}
	return (num);

}
