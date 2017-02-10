#include <stdio.h>

/**
 * main -
 * Return:
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
			putchar(',');
			putchar(' ');
			m++;
		}
		m = 0;
       		n++;
	}
	putchar('\n');

	return (0);
}
