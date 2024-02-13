#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Provide addition to the text at the end of a file.
 * @filename: Parameter to be used
 * @text_content: Pointer to be added.
 * Return: 1 if the test does add anything to the file or -1
 * if the file does not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t bytes_written;

	if (!filename)
	{
		return (-1);
	}

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		bytes_written = write(file_d, text_content, strlen(text_content));
	
		if (bytes_written == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);

	return (1);
}
