#include <stdio.h>

/**
 * main - Print all possible combinations fo single-digit numbers
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
