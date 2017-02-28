#include "holberton.h"

/**
 * _strchr - locates character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: pointer to first occurence of c or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
