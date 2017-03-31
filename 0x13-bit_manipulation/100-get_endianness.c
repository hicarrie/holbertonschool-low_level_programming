#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int size; /* number of bits for unsigned long int */
	int big; /* big endian bit to compare */
	int little; /* little endian bit to compare */
	int endian;

	size = sizeof(unsigned long int) * 8 - 1;
	big = 1 >> size;
	little = 1;

	if ((big & 1) == 1)
		endian = 0;
	else if ((little & 1) == 1)
		endian = 1;

	return (endian);
}
