#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: void
 */
char *leet(char *s)
{
	int i, j = 0;
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char L[] = {'A', 'E', 'O', 'T', 'L'};
	char n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == l[j] || s[i] == L[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
