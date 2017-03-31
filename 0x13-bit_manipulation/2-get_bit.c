#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0 of the bit to be returned
 * Return: value of the bit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result;

	/* right shifting by index moves specified bit to rightmost position */
	result = (n >> index) & 1;

	if (result != 0 && result != 1)
		return (-1);

	return (result);
}
