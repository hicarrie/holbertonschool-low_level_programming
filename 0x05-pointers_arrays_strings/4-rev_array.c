#include "holberton.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int swap;

	while (i < n - 1)
	{
		swap = a[i];
		a[i] = a[n - 1];
		a[n - 1] = swap;
		i++;
		n--;
	}
}
