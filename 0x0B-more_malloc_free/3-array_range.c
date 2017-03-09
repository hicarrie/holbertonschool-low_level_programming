#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of integer
 * @max: maximum value of integer
 * Return: pointer to array or NULL if malloc fails or min > max
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int count = 0;

	if (min > max)
		return (NULL);

	if (min == max)
		count = 1;
	else
		for (i = min; i <= max; i++)
			count++;

	array = malloc(sizeof(int) * count);

	if (array == NULL)
		return (NULL);

	if (min == max)
		array[i] = min;
	else
		for (i = min; i <= max; i++)
			array[i] = i;

	return (array);
}
