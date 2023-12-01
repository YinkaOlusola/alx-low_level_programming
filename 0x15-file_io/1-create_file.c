#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Nameof file to be created.
 * @text_content: Content of created file
 *
 * Return: 1 on success and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file, str_len;

	str_len = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC,  S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[str_len])
			str_len++;
		write(file, text_content, str_len);
	}

	close(file);
	return (1);
}
