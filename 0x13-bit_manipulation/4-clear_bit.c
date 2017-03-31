#include "holberton.h"

/**
 * clear_bit - sets value of bit to 0 at given index
 * @n: number to be evaluated
 * @index: index starting from 0 of bit to be set
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1); /* checks if index is larger than # of positions */

	mask = 1 << index; /* shifts 1 to the index position */

	*n = *n & ~mask;

	return (1);
}
