#include <stdio.h>

/**
 * main - prints n from 0 to 15, converting from int to hex
 * Return: all numbers of base 16
 */
int main(void)
{
	int n = 0;
	int c;

	while (n <= 9)
	{
		c = n + 48;
		putchar(c);
		n++;
	}
	while (n >= 9 && n < 16)
	{
		c = n + 87;
		putchar(c);
		n++;
	}
	putchar('\n');

	return (0);
}
