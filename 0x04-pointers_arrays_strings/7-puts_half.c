#include "holberton.h"

/**
 * puts_half - prints half a string followed by a new line
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i, k;
	int j = _strlen(str);

	if (j % 2 == 0)
		k = j / 2;
	else
		k = (j / 2) + 1;

	for (i = k; i < j; i++)
		_putchar(str[i]);

	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @str: string to be evaluated
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
