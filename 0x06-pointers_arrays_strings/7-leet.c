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
	int i;
	int j = 0;
	char leetmap[256] = {0};
	char *leetchars = "AELTL";
	char *leetreplacements = "43071";

	for (i = 0; leetchars[i] != '\0' && leetreplacements[i] != '\0'; i++)
	{
		leetmap[(unsigned char)leetchars[i]] = leetreplacements[i];
		leetmap[(unsigned char)(leetchars[i] + 32)] = leetreplacements[i];
	}
	for (; str[j] != '\0'; j++)
	{
		if (leetmap[(unsigned char)str[j]] != 0)
		{
			str[j] = leetmap[(unsigned char)str[j]];
		}
	}

	return (str);
}
