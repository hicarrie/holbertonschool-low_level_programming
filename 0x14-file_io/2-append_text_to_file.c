#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int counter; /* number of bytes in text_content */
	int write_ret; /* return status of write syscall */
	int close_ret; /* return status of close syscall */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_TRUNC | O_WRONLY, S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (counter = 0; text_content != '\0'; counter++)
		;

	if (counter == 0)
		return (1);

	write_ret = write(fd, text_content, counter);
	if (write_ret == -1)
		return (-1);

	close_ret = close(fd);
	if (close_ret == -1)
		return (-1);

	return (1);
}
