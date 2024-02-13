#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Provide addition to the text at the end of a file.
 * @filename: Parameter to be used
 * @text_content: Pointer to be added.
 * Return: 1 if the test does add anything to the file or -1
 * if the file does not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}

	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);

	return (1);
}
