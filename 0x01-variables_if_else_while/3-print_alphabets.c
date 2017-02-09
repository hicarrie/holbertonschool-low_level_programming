#include <stdio.h>

/**
 * main - prints c as letter starting with a, incrementing until c = z,
 * repeats for uppercase alphabet
 * Return: returns alphabet in lowercase and uppercase
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
