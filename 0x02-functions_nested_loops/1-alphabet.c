#include "holberton.h"

/**
 * print_alphabet - prints alphabet using _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
