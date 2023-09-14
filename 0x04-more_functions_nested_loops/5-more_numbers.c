#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers from 0 to 14 with newline
 * Return: Always void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				_putchar(i + 48);
			}
			else
			{
				printf("%d", i);
			}
		}
		_putchar('\n');
	}
}
