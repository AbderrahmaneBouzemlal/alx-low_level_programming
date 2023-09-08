#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char s = 'a';
	char c = 'A';

	for (; s <= 'z'; s++)
	{
		putchar(s);
	}

	for (; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
