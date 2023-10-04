#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	int i, j, c, x;
	char *args;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = c = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			c++;
		}
		c++;
	}
	args = malloc((c + 1) * sizeof(char));
	if (args == NULL)
	{
		free(args);
		return (NULL);
	}
	for (i = j = x = 0; x < c; j++, x++)
	{
		if (av[i][j] == '\0')
		{
			args[x] = '\n';
			i++;
			x++;
			j = 0;
		}
		if (x < c - 1)
			args[x] = av[i][j];
	}
	args[x] = '\0';
	return (args);
}
