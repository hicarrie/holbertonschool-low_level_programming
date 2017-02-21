#include "holberton.h"

/**
 * puts_half - prints half a string followed by a new line
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j = _strlen((char *)str);

	if (j % 2 == 0)
	{
		for (i = j / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = (j - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
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
