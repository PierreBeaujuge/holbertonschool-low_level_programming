#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * main - function that copies the content of a file
 * to another file
 * @ac: argument count
 * @av: arguments, file_from and file_to
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, read_count, write_count, close_status;
	char buf[1024];
	char *file_from, *file_to;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = av[1];
	file_to = av[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from), exit(98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	read_count = 1;
	while (read_count != 0)
	{
		read_count = read(fd_from, buf, 1024);
		if (read_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from), exit(98);
		buf[1024] = '\0';
		if (read_count != 0)
		{
			write_count = write(fd_to, buf, read_count);
			if (write_count == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
		}
	}
	close_status = close(fd_from);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	close_status = close(fd_to);
	if (close_status == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
