#ifndef HOLBERTON_H
#define HOLBERTON_H

#define BUFLEN 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
int exit_error(int num, char *str, int fd);

#endif /* HOLBERTON_H */
