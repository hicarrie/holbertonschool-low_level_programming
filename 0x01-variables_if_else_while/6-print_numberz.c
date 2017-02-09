#include <stdio.h>

/**
 * main - prints all numbers from 0, incrementing until reaches 9
 * Return: all numbers of base 10
 */
int main(void)
{
	int n = 0;
	int c;

	while (n < 10)
	{
		c = n + '0';
		putchar(c);
		n++;
	}
	putchar('\n');

	return (0);
}
