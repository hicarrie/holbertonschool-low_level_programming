#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory which
 * contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer to allocated space in memory or NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i;
	char *ar;

	if (str == NULL)
		return (NULL);

	ar = malloc(sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}

	ar[i] = '\0';

	return (ar);
}
