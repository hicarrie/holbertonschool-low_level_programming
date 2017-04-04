#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure (file cannot be created, file cannot be
 * written, write fails, filename is NULL, etc.)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int counter; /* counts number of bytes in text_content */
	int write_ret; /* return value of write */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	for (counter = 0; text_content[counter] != '\0'; counter++)
		;

	if (text_content == NULL)
		text_content = '\0';

	write_ret = write(fd, text_content, counter);
	if (write_ret == -1)
		return (-1);

	return (1);
}
