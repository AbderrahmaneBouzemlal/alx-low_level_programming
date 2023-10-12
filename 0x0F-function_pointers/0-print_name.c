#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a string
 * @name: The string to be printed
 * @f: A pointer to a function
 * Return: Always NOTHING
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
