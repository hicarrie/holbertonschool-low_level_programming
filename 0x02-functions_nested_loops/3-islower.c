#include "holberton.h"

/**
 * _islower - checks for lowercase characters
 * @c: character to be checked
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
