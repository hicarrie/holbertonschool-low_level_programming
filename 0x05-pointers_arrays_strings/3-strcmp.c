#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: integer result of comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = _strlen(s1);
	int j = _strlen(s2);

	if (i < j)
		return (-15);
	else if (i > j)
		return (15);
	else
		return (0);
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
