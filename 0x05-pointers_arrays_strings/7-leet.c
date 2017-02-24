#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == a[j])
				s[i] = n[j];
		}
	}
	return (s);
}
