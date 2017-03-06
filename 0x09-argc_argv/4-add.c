#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (_isnum(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (_isnum(argv[i]) == 1)
		{
			sum = sum + atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * _isnum - checks for a digit
 * @n: number to be checked
 * Return: 0 or 1
 */
int _isnum(char n[])
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (isdigit(n[i]) == 0)
			return (0);
	}
	return (1);
}
