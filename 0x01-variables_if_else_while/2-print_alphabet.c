#include <stdio.h>

/**
 * main - prints c as letter starting with a, incrementing until c = z
 * Return: returns alphabet in lowercase
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
