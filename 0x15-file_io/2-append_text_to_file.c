#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - A Function that appends text at the end of a file
 * @filename: The path to the file
 * @text_content: The text to include in the file
 * Return: 1 on success and -1 on failure
 */
int append _text_to_file(const char *filename, char *text_content)
{
	int fd, a, b = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(fd, text_content, b);
		if (a != b)
			return (-1);
	}

	close(fd);

	return (1);
}
