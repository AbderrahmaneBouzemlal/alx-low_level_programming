#include <stdio.h>
#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str: The string to be printed
 * Return: Always void
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != 0)
	{
		len++;
	}

	for (i = 0; i < len; i=i+2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
