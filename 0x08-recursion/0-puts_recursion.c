#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion : function thatprints a string followed by a newline
 * @s: the string to be printed
 * Return: Always void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
}
