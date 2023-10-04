#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional array
 * @grid: The two dimensional array
 * @height: The number of the rows
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
