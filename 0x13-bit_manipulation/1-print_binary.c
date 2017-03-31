#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int binary;
	int zero = 0; /* flag to make sure leading 0s are not printed */
	int size; /* size in bits of n, minus 1 for +/- bit */
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	size = sizeof(n) * 8 - 1;
	for (i = size; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			zero = 1;
		}
		else if (zero == 1)
			_putchar('0');
	}
}
