#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i, j;
	char *sep;

	print_t print[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(arg, format);

	i = 0;
	sep = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (print[j].p != NULL)
		{
			if (format[i] == print[j].print[0])
			{
				sep = ", ";
				print[j].p(arg, sep);
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(arg);
}

/**
 * print_c - prints char
 * @arg: argument to print
 * Return: void
 */
void print_c(va_list arg, char *sep)
{
	printf("%c%s", va_arg(arg, int), sep);
}

/**
 * print_i - prints integer
 * @arg: argument to print
 * Return: void
 */
void print_i(va_list arg, char *sep)
{
	printf("%d%s", va_arg(arg, int), sep);
}

/**
 * print_f - prints float
 * @arg: argument to print
 * Return: void
 */
void print_f(va_list arg, char *sep)
{
	printf("%f%s", va_arg(arg, double), sep);
}

/**
 * print_s - prints string
 * @arg: argument to print
 * Return: void
 */
void print_s(va_list arg, char *sep)
{
	if (arg != NULL)
		printf("%s%s", va_arg(arg, char *), sep);
	else
		printf("(nil)%s", sep);
}
