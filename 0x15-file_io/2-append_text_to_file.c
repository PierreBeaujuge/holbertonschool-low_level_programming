#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file to be read
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_count, close_status;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_count = write(fd, text_content, _strlen(text_content));
	if (write_count == -1)
		return (-1);

	close_status = close(fd);
	if (close_status == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - function that returns the length of a string
 *
 * @s: parameter defined in main
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
