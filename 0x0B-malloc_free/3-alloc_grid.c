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

	arr = malloc(sizeof(int *) * width);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(sizeof(int) * height);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
		for(j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
