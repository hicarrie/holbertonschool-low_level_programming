#include <stdio.h>

/**
 * main - prints sum of even fibonacci numbers whose values do not
 * exceed 4,000,000
 * Return: 0
 */
int main(void)
{
	unsigned long int x, k;
	unsigned long int i = 1;
	unsigned long int j = 1;
	unsigned long int sum = 0;

	for (x = 0; x <= 4000000 ; x++)
	{
		k = i + j;
		i = j;
		j = k;

		if (j % 2 && j <= 4000000)
		{
			sum = sum + j;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
