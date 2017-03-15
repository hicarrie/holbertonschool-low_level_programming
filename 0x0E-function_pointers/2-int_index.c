#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function that compares integers
 * Return: index of first element for which cmp does not return 0 or -1 if
 * no element matches or size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) == 0)
			i++;
		else if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
