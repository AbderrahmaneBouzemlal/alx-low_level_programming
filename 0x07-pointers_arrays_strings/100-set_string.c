#include <stdio.h>
#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: is a value of a pointer (pointer to a pointer)
 * @to: is a pointer ot char
 * Return: void in all cases
 */
void set_string(char **s, char *to)
{
	*s = to;
}
