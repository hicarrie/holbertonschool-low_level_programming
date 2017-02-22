#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i, swap;
	int j = _strlen(s) - 1;

	while (i <= j)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
		i++;
		j--;
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
