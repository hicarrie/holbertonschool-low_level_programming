#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: pointer to beginning of located substring or NULL if substring is
 * not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;
	char *begin = haystack;

	while (*begin != '\0')
	{
		h = begin;
		n = needle;

		while (*h == *n && *h != '\0' && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (begin);
		begin++;
	}
	return (0);
}
