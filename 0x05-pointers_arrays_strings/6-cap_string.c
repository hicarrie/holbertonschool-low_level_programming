#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(',
		      ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ' ';
	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - ' ';
			}
		}
	}
	return (s);
}
