#include "main.h"

/**
 * print_rev - A function to print a string in reverse
 * @s: The string to print in reverse.
 * Return: None
 *
 */

void print_rev(char *s)
{
	int len, i, count;

	len = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
