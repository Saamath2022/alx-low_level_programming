#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <sys/types.h>

/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: Pointer to function
 * @letters: char parameter
 * Return: If file name is NULL return 0 or write if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	bytes_read = read(file_d, buffer, letters);

	if (bytes_read == -1)
	{
		close(file_d);
		free(buffer);
		return (0);
	}
	close(file_d);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);

	if (bytes_read < 0 || (size_t)bytes_written != letters)
	{
		return (0);
	}
	return (bytes_read);
}
