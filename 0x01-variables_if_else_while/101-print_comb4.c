#include <stdio.h>

/**
 * main - loops through variables n, m, o, printing 0-9
 * Return: all possible combinations of three digits
 */
int main(void)
{
	int n = 0;
	int m = 0;
	int o = 0;

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
