#include "holberton.h"

/**
 * *_strncpy - copies string pointed to by src to the buffer pointed to dest
 * @dest: string destination
 * @src: string source
 * @n: number of bytes to be used from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
