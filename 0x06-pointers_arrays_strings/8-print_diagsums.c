#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals for a square matrix
 * of integers
 * @a: array name
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + (*((int *)a + i * size + j));
			if (j == (size - 1 - i))
				sum2 = sum2 + (*((int *)a + i * size + j));
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
