#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2D array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = (int **)malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (i = 0; i <= height; i++)
	{
		ar[i] = (int *)malloc(width * sizeof(int));

		if (ar[i] == NULL)
		{
			free(ar[i]);
			return (NULL);
		}

		for (j = 0; j <= width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
