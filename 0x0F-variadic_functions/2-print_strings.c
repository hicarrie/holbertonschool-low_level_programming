#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: pointer to string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);

	for (i = 1; i <= n; i++)
	{
		s = (void *)(va_arg(strings, char *));
		if (i != n)
		{
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");

			if (separator != NULL)
				printf("%s", separator);
			else
				printf(" ");
		}
		else
			printf("%s\n", s);
	}

	va_end(strings);
}
