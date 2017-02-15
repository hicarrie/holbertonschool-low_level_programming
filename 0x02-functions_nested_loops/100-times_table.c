#include "holberton.h"

/**
 * print_times_table - prints n times table
 * @n: integer of times table to be printed
 * Return: void
 */
void print_times_table(int n)
{
	int m;
	int i = n;

	if (n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (m = 0; m <= n; m++)
			{
				if (m == 0)
					_putchar(i * m % 10 + '0');
				else if (i == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(i * m % 10 + '0');
				}
				else
				{
					if (i * m / 100 + '0' == '0')
						_putchar(' ');
					else
						_putchar(i * m / 100 + '0');
					if (i * m / 10 + '0' == '0')
						_putchar(' ');
					else if (i * m / 10 + '0' >= 10)
						_putchar(i * m / 10 % 10 + '0');
					else
						_putchar(i * m / 10 + '0');
					_putchar(i * m % 10 + '0');
				}
				if (m != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
