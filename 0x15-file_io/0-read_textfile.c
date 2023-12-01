#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output
 * @filename: Name of the file to read from
 * @letters: Number of letters to read and print
 * Return: Number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, bytesRead;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY, 0600);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char *) * letters);

	if (buffer == NULL)
		return (0);

	bytesRead = read(file, buffer, letters);
	write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(file);
	return (bytesRead);
}
