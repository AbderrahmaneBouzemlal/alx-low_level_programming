#include "main.h"
#include <stdio.h>
/**
 * leet - function that encodes a string into 1337
 * @str: The input to be encoded
 *
 * Return: leet code
 */
char *leet(char *str)
{
	int i, j;
	char *leetchars = "AaEeOoTtLl";
	char *leetreplacements = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;

		while (leetchars[j] != '\0')
		{
			if (leetchars[j] == str[i])
			{
				str[i] = leetreplacements[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
