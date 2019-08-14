#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_count, write_count, close_status;
	char *buf;
	ssize_t actual_count;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	read_count = read(fd, buf, letters);
	buf[letters] = '\0';
	write_count = write(STDOUT_FILENO, buf, read_count);
	if (write_count == -1)
	{
		free(buf);
		return (0);
	}
	if (write_count != read_count)
		return (0);

	close_status = close(fd);
	if (close_status == -1)
		return (0);

	free(buf);
	actual_count = (ssize_t)write_count;
	return (actual_count);
}
