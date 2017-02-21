#include "holberton.h"

/**
 * puts_half - prints half a string followed by a new line
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j = _strlen(str);

	if (j % 2 == 0)
	{
		i = j / 2;
	        while (i <= j - 1)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (j % 2 == 1)
	{
		i = (j - 1) / 2;
		while (i <= j - 1)
		{
			_putchar(str[i]);
			i++;
		}
	}
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
