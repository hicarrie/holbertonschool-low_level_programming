#include <stdio.h>

/**
 * main - prints c as letter starting with a, incrementing until c = z,
 * skipping q and e
 * Return: returns alphabet in lowercase, minus q and e
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');

	return (0);
}
