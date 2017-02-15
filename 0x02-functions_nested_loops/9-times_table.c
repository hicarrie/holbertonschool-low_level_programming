#include "holberton.h"

/**
 * times_table - prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; b++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == 0 || b == 0)
			{
				if (b == 0)
				{
					_putchar((a * b) % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((a * b) % 10 + '0');
				}
			}
			else
			{
				if ((a * b) / 10 + '0' == '0')
					_putchar(' ');
				else
					_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');

			}
			if (b != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
