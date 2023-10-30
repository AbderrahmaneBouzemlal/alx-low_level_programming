#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: A pointer to the string
 * @letters: The number of letters it should read and print
 * Return: The Actual number of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t num = 0;
	ssize_t printed_bytes = 0;

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);

	if (fileDescriptor < 0)
	{
		close(fileDescriptor);
		return (0);
	}
	num = read(fileDescriptor, buffer, letters);
	if (num == -1)
	{
		close(fileDescriptor);
		return (0);
	}
	printed_bytes = write(STDOUT_FILENO, buffer, num);
	if (printed_bytes == -1)
	{
		close(fileDescriptor);
		return (0);
	}
	free(buffer);
	close(fileDescriptor);
	return (printed_bytes);
}
