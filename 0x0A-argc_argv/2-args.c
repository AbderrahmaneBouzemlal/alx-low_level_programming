#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: Arguments count
 * @argv: Arguments array
 * Return: Always 0 (succuss)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
