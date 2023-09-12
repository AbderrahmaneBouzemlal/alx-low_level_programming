#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table starting with 0
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j != 0 && k < 10)
			{
				printf(" %d", k);
			}
			else
			{
				printf("%d", k);
			}
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
