#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t position;

	if (array == NULL)
		return (-1);

	for (position = 0; position < size; position++)
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int)position, array[position]);
		if (array[position] == value)
			return (position);
	}

	return (-1);
}
