#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height);
/**
 * alloc_grid - Create a 2 dimensional array of integers
 * @width: The Width of the array
 * @height: The height of the array
 * Return: A pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for(j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
