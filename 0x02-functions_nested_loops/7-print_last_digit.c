#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to have last digit printed
 * Return: 0
 */
int print_last_digit(int n)
{
	int m;

	if (n >= 0)
	{
		m = n % 10;
	}
	else
	{
		m = -n % 10;
	}

	_putchar(m + '0');
	return (m);
}
