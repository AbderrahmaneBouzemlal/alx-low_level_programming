#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the ntimes table starting from 0
 * @n: int that spicify the number of tables
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
                        	if (j != 0 && k < 10)
                        	{
                                	printf("  %d", k);
                        	}
				else if(k > 9 && k < 100)
				{
					printf(" %d", k);
				}
				else
                        	{
                                	printf("%d", k);
                        	}
                        	if (j != n)
                        	{
                                	putchar(',');
                                	putchar(' ');
                        	}
                	}
                	putchar('\n');
		}
	}
}
