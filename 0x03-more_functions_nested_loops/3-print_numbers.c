#include "holberton.h"

/**
 * print_numbers - prints numbers using _putchar
 * Return: 0
 */
void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
