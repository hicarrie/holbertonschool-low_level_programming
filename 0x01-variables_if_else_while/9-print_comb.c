#include <stdio.h>

/**
 * main - converts n to char, prints conversion followed by comma and space
 * and increments
 * Return: 0 through 9, separated by commas
 */
int main(void)
{
	int n = 0;
	int c;

	while (n < 10)
	{
		c = n + '0';
		putchar(c);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');

	return (0);
}
