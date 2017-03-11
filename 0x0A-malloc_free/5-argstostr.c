#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: count of arguments
 * @av: pointer to array of strings of arguments
 * Return: pointer to concatenated string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int bytes;

	bytes = total_len(ac, av);

	if (av == NULL)
		return (NULL);

	str = malloc(bytes);

	if (str == NULL)
		return (NULL);

	copy_strs(av, str);
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

/**
 * total_len - returns the length of all strings
 * @ac: number of arguments
 * @av: pointer to array of strings of arguments
 * Return: sum of length of all strings
 */
int total_len(int ac, char **av)
{
	int sum;

	sum = sum_len(av) + ac + 1;
	sum = sum * sizeof(char);
	return (sum);
}

/**
 * sum_len - calculates length of all strings
 * @av: strings to be evaluated
 * Return: string length
 */
int sum_len(char **av)
{
	int j = 0;
	int sum = 0;

	for (j = 0; av[j] != NULL; j++)
		sum = sum + _strlen(av[j]);

	return (sum);
}

/**
 * copy_str - copies string to buffer
 * @a: string to copy
 * @b: buffer
 * Return: void
 */
void copy_str(char *a, char *b)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		b[i] = a[i];
}

/**
 * copy_strs - copies each string to buffer
 * @av: strings to copy
 * @s: buffer
 * Return: void
 */
void copy_strs(char **av, char *s)
{
	int i;
	int j = 0;

	for (i = 0; av[i] != NULL; i++, j++)
	{
		copy_str(av[i], s + j);
		j = j + _strlen(av[i]);
		s[j] = '\n';
	}
	s[j] = '\0';
}
