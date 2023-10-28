#include <unistd.h>

/**
 * _putchar - Prints a single character
 * @c: Character to be printed.
 * Return: A printed single character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

