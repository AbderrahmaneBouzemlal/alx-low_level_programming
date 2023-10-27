#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			putchar('1');
			c++;
		}
		else if (c)
			putchar('0');
	}
	if (!c)
		putchar('0');
}
