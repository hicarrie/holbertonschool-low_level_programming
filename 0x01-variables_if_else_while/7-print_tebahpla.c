#include <stdio.h>

/**
 * main - prints n as letter starting with z and decrements until reaches a
 * Return: alphabet in reverse, lowercase, followed by newline
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
