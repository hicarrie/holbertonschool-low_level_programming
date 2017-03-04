#include "holberton.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string to be evaluated
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}