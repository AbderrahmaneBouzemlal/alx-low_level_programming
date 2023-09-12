#include <stdio.h>
/**
 * main - Entry point prints the sum of even-valued in fibanocci numbers
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	int fibon;
	long int fibonaci[60];
	int sum = 0;

	fibonaci[0] = 1;
	fibonaci[1] = 2;

	for (i = 2; i <= 50; i++)
	{
		fibonaci[i] = fibonaci[i - 1] + fibonaci[i - 2];
	}
	fibon = 0;
	while (fibonaci[fibon] < 4000000)
	{
		if (fibonaci[fibon] % 2 == 0)
		{
			sum += fibonaci[fibon];
		}
		fibon++;
	}

	printf("%d\n", sum);

	return (0);
}
