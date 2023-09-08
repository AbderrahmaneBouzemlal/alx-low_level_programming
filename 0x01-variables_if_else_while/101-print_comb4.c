#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i >= j)
			{
				continue;
			}
			for (k = 0; k < 10; k++)
			{
				if (j >= k)
				{
					continue;
				}

				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);

				if (i + j + k != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
