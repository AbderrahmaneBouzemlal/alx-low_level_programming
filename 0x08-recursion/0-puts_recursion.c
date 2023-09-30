#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion : function thatprints a string followed by a newline
 * @s: the string to be printed
 * Return: Always void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
