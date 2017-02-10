#include <stdio.h>

/**
 * main - loops through variables n and m, printing 0-9
 * Return: 00-99 separated by commas
 */
int main(void)
{
	int n = 0;
	int m = 0;
	int c;
	int d;

	while (n <= 9)
	{
		while (m <= 9)
		{
			c = n + '0';
			putchar(c);
			d = m + '0';
			putchar(d);
			if (n == 9 && m == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		m = 0;
		n++;
	}
	return (0);
}
