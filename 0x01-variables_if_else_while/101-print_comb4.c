#include <stdio.h>

/**
 * main - loops through variables n and m, printing 0-9
 * Return: 00-99 separated by commas
 */
int main(void)
{
	int n, m, o;

	while (n <= 9)
	{
		m = n + 1;
		while (m <= 9)
		{
			o = m + 1;
			while (o <= 9)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(o + '0');
				if (n == 7 && m == 8 && o == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			m++;
		}
		n++;
	}
	return (0);
}
