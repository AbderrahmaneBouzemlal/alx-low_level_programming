#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: int that the algorithm begin its printing
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d\n", 98);
}
