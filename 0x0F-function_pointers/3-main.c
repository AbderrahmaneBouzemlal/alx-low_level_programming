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
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
