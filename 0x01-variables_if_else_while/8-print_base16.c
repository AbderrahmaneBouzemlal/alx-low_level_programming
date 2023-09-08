#include <stdio.h>

/**
 * main - Print the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int  number;

	for (number = 0; number < 10; number++)
	{
		putchar(48 + number);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
