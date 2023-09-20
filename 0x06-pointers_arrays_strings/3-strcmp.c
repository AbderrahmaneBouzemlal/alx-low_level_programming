#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: An integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int s;
	int sum = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		s = s1[i] - s2[i];
		sum += s;
	}
	return (sum);
}
