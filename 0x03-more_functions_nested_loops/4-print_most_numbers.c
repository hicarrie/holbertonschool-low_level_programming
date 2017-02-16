#include "holberton.h"

/**
 * print_most_numbers - prints numbers using _putchar except 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
