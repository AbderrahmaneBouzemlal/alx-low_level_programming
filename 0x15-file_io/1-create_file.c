#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: The file name
 * @text_content: The file content
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	ssize_t fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		bytes_written = write(fd, "", 0);

	bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	if ((ssize_t)strlen(text_content) != bytes_written)
		return (-1);
	close(fd);
	return (1);
}
