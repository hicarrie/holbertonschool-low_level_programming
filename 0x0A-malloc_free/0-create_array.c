#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes with a specific char
 * @size: size of memory
 * @c: char to initialize array with
 * Return: NULL if size is 0 or fails, or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	for (i = 0; i <= size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
