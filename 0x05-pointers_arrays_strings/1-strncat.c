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

	if (j <= n)
	{
		for (i = 0; src[i] != '\0'; i++, j++)
			dest[j] = src[i];

		dest[j] = '\0';
	}
	else if (j > n)
	{
		for (i = 0; src[i] < src[n]; i++, j++)
			dest[j] = src[i];
	}
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
