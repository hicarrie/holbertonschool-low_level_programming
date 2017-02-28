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
	int i, j, count = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				i++;
				j++;
				while (haystack[i] == needle[j] &&
					needle[j] != '\0')
				{
					count++;
				}
				return (&haystack[i - count]);
			}
		}
	}
	return (0);
}
