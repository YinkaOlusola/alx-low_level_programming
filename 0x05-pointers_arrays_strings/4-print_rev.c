#include "main.h"

/**
 * print_rev - A function to print a string in reverse
 * @s: The string to print in reverse.
 * Return: None
 *
 */

void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
