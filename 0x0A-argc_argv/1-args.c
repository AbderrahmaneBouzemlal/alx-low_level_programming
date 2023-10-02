#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: The count of the arguments
 * @argv: The array that containes the Arguments
 * Return: always 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
