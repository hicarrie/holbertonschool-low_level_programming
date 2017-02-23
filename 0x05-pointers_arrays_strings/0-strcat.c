#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: string to be appended
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++, j++)
		dest[j] = src[i];

	dest[j] = '\0';

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
