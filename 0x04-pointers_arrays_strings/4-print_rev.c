#include "holberton.h"

/**
 * print_rev - prints string in reverse followed by a newline
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j = _strlen(s);

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
