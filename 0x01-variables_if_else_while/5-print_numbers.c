#include <stdio.h>

/**
 * main - prints numbers starting from 0, incrementing until reaches 9
 * Return: all numbers of base 10
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
