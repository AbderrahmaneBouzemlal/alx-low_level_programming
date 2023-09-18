#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: The string to be reversed
 * Retrurn: always void
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j-- > 0;)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
