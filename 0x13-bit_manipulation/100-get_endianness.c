#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int compare; /* compares against mask to determine endianness */
	unsigned long int size; /* number of bits for unsigned long int */
	int endian;

	compare = 1;
	size = sizeof(unsigned long int) * 8 - 1;

	if ((compare & 1) == 1)
		endian = 1;
	else
	{
		compare = compare >> size;
		if ((compare & 1) == 1)
			endian = 0;
	}

	return (endian);
}
