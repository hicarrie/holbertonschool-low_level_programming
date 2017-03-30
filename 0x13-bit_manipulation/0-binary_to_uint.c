#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number or 0 if there are characters that are not 0 or 1
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	}

	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		result = result << 1; /* multiplies by two */
		if (b[i] == '1')
			result++;
	}

	return (result);
}
