#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read and print
 * @letters: number of letters it should read and print
 * Return: actual number of letters read and printed or 0 if the file cannot be
 * open or read, filename is NULL, or write fails or does not return expected
 * amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[1024];
	int bytes; /* number of bytes read by read syscall */
	int i;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, buffer, letters);

	if (bytes == -1)
		return (0);

	buffer[bytes] = '\0';

	close(fd);

	i = 0;
	while (buffer[i] != '\0')
	{
	        _putchar(buffer[i]);
		i++;
	}

	return (bytes);
}
