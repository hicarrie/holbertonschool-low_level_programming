#include "holberton.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char a;

	while (n <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		n++;
		_putchar('\n');
	}
}
