#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2D grid created by alloc_grid
 * @grid: double pointer to grid
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
