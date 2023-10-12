#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
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
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = argv[2];
	b = atoi(argv[3]);
	a = atoi(argv[1]);
	ptr = get_op_func(s);
	
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ptr(a, b));
	return (0);
}
