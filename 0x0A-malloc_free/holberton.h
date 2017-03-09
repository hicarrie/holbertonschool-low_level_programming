#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
int _strlen(char *s);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int sum_len(char **av);
int total_len(int ac, char **av);
void copy_str(char *a, char *b);
void copy_strs(char **av, char *s);

#endif /* HOLBERTON_H */
