#include "holberton.h"

/**
 * _strchr - locates character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: pointer to first occurence of c or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *pc;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			pc = &s[i];
			break;
		}
		else
			pc = 0;
	}
	return (pc);
}
