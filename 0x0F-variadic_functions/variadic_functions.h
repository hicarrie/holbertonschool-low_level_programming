#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct print - Struct print
 * @print: struct print
 * @p: The function associated
 */
typedef struct print
{
	char *print;
	void (*p)(va_list arg);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list arg);
void print_i(va_list arg);
void print_f(va_list arg);
void print_s(va_list arg);

#endif /* VARIADIC_FUNCTIONS_H */
