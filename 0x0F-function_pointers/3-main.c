#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments array
 * Return: the result of the operation
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = argv[2];
	b = atoi(argv[3]);
	a = atoi(argv[1]);

	if (get_op_func(s) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	else
	{
		printf("%d\n", (*get_op_func(s))(a, b));
	}

	return (0);
}
