#include "holberton.h"

/**
 * rot13 - encodes string using rot13
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char x[] = "abcdefghijklmnopqrstuvwxyznopqrstuvwxyzabcdefghijklm";
	char y[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 51; j++)
		{
			if (s[i] == x[j])
				s[i] = y[j];
			else if (s[i] == y[j])
				s[i] = x[j];
		}
	}
	return (s);
}
