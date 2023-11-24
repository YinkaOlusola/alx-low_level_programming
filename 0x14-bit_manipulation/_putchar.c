#include <unistd.h>

/**
 * _putchar - Prints a character
 * @c: The character to be printed.
 *
 * Return: The number character on succes, 0 otherwise.
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
