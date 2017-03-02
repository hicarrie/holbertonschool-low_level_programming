#include "holberton.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome or 0 if it's not
 * @s: string to be evaluated
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s, i);

	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - returns 1 if a string is a palindrome or 0 if it's not
 * @s: string to be evaluated
 * @len: length of string
 * Return: 1 or 0
 */
int helper_palindrome(char *s, int len)
{
	if (len == 0 || len == 1)
		return (1);

	if (*s != s[len - 1])
		return (0);
	else
		return (helper_palindrome(s + 1, len - 2));
}


/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * @i: integer to iterate with
 * Return: length of string
 */
int _strlen(char *s, int i)
{
	if (*s == '\0')
		return (i);
	return (_strlen(s + 1, i + 1));
}
