#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two numbers
 * @a: the first number
 * @b: the second number
 * Return: The result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Calculate the difference between two numbers
 * @a: the first number
 * @b: the second number
 * Return: The result
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply two numbers
 * @a: the first number
 * @b: the second number
 * Return: The result
 */

int op_mul(int a, int b)
{
	int c;

	c = a * b;
	printf("%d\n", c);
	return (c);
}
/**
 * op_div - divide two numbers
 * @a: the first number
 * @b: the second number
 * Return: The result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Calculate the modulo of two numbers
 * @a: the first number
 * @b: the second number
 * Return: The result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
