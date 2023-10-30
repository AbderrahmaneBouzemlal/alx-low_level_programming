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
	int x, y = 0;
	ssize_t fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(fd, text_content, y);
		if (x != y)
			return (-1);
	}

	close(fd);
	return (1);
}
