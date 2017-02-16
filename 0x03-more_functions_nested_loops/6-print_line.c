#include "holberton.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of lines to print
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
