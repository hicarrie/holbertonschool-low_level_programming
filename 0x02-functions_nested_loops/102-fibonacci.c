#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned int x;
	unsigned long int i = 1;
	unsigned long int j = 1;
	unsigned long int k;

	printf("%lu, ", i);

	for (x = 0; x <= 48; x++)
	{
		k = i + j;
		i = j;
		j = k;

		if (x != 48)
			printf("%lu, ", j);
		else
			printf("%lu\n", j);
	}
	return (0);
}
