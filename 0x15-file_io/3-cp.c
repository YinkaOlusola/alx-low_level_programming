#include <stdio.h>
#include "main.h"

/**
 * main - Function main
 * @argc: Count of arguments passed in.
 * @argv: The arguements
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file_from_to(argv[1], argv[2]);
	exit(0);
}


/**
 * copy_file_from_to - Copies the content of a file from
 * source to destination
 * @from: The file with the content to copy.
 * @to: The file in which to write the copied content.
 *
 * Return: None.
 */

void copy_file_from_to(const char *from, const char *to)
{
	int src_file, dest_file, read_input;
	char buffer[1024];

	src_file = open(from, O_RDONLY);

	if (!from || src_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	dest_file = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0644);

	while ((read_input = read(src_file, buffer, 1024)) > 0)
	{
		if (write(dest_file, buffer, read_input) != read_input || dest_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", to);
			exit(99);
		}
	}

	if (read_input == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	if (close(src_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}

	if (close(dest_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file);
		exit(100);
	}
}



