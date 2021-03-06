#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: pointer to string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 1; i <= n; i++)
	{
		if (i != n)
		{
			printf("%d", va_arg(num, unsigned int));
			if (separator != NULL)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(num, unsigned int));
	}
	printf("\n");
	va_end(num);
}
