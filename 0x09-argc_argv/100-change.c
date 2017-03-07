#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: pointers to strings of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
		printf("0\n");
	else
		printf("%d\n", change(atoi(argv[1])));

	return (0);
}

/**
 * change - makes change
 * @cents: given amount of money
 * Return: number of coins
 */
int change(int cents)
{
	int q, d, n, t = 0;
	int p = cents;

	if (p >= 25)
	{
		q = p / 25;
		p = p % 25;
	}
	if (p >= 10)
	{
		d = p / 10;
		p = p % 10;
	}
	if (p >= 5)
	{
		n = p / 5;
		p = p % 5;
	}
	if (p >= 2)
	{
		t = p / 2;
		p = p % 2;
	}

	return (q + d + n + t + p);
}
