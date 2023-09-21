#include "main.h"
#include <stdio.h>

/**
 * base10 - power in 10 base
 * @n: an exponent
 * Return: returns 10 to the power of exponent
 */
int base10(int n)
{
    int base = 10;

    while (n > 0)
    {
        base *= 10;
        n--;
    }
    return (base);
}

/**
 * print_number - prints integers entered as parameters using putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
    int power;

    power = base10(8);

    if (n < 0)
    {
        putchar('-');
        n *= -1;
    }

    if (n == 0)
    {
        putchar('0');
    }

    while (power > 0)
    {
        int digit = n / power;
	putchar(digit + '0');
	n = n % power;
	power /= 10;
    }
}
