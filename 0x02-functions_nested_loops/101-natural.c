#include <stdio.h>

/**
 * main - prints sum of multiples of 3 or 5 under 1024
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	unsigned int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
