#ifndef FUNCTION_HEADERS_H
#define FUNCTION_HEADERS_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_HEADERS_H */
