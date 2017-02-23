#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: string to be appended
 * @n: maximum bytes used from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';

	return (dest);
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
