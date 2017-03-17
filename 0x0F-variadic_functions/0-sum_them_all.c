#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first paramter
 * Return: sum of parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(num, unsigned int);

	va_end(num);

	return (sum);
}
