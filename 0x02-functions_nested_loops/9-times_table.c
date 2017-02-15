#include "holberton.h"

/**
 * times_table - prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; b++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 9)
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
