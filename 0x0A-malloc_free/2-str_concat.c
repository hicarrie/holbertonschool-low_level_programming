#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to allocated memory containing concatenated strings or
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;
	int len, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
		len1 = _strlen(s1);

	if (s2 == NULL)
	{
		s2 = "";
	}
	else
		len2 = _strlen(s2);

	len = len1 + len2;

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; i++, j++)
		str[i] = s2[j];

	str[i] = '\0';

	return (str);
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
