#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers followed by a
 * new line
 * @a: array
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL)
	{
	        printf("\n");
	}

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
