#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 *	it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;
	ssize_t total_letters = 0;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	while ((bytes_read = read(file_descriptor, buffer, letters)) > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
		{
			free(buffer);
			close(file_descriptor);
			return (0);
		}
		total_letters += bytes_written;
	}

	free(buffer);
	close(file_descriptor);
	return (total_letters);
}
