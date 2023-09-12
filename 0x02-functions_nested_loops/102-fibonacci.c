#include <stdio.h>
/**
 * main - Entry point prints the first 50 fibonacci numbers
 * Return: Always 0 (Successeed)
 */
int main(void)
{
	int i;
	int fibon;
	long int fibonaci[60];

	fibonaci[0] = 1;
	fibonaci[1] = 2;

	for (i = 2; i <= 50; i++)
	{
		fibonaci[i] = fibonaci[i - 1] + fibonaci[i - 2];
	}

	fibon = 0;

	while (fibon < 50)
	{
		printf("%ld, ", fibonaci[fibon]);
		fibon++;
	}
	printf("%ld\n", fibonaci[50]);

	return (0);
}
