#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
/**
 * main - Entry Point. Copies a file to another file
 * @agc: Number of command line arguments
 * @argv: Array of pointers to command-line arguments
 * Return: Always 0 (on Succes)
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
	dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
	return (97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	return (98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
	if (fd_to == -1)
{
	dprintf(2, "Error: Can't write to file %s\n", argv[2]);
	return (99);
}
dprintf(1, "Why you should think twice before putting pictures on social media.\n
		(What you always wanted to know about @Incitatous)\n#PrivacyAware\n");
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written != bytes_read)
       	{
		dprintf(2, "Error: Write to file %s failed\n", argv[2]);
		return (99);
	}
}

if (close(fd_from) == -1 || close(fd_to) == -1)
{
	dprintf(2, "Error: Can't close file descriptor\n");
	return (100);
}
return (0);
}
