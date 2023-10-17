#include "main.h"

/**
 * puts2 - Prints every other character starting witht the first character
 * @str: The string from which every other character is to be printed
 * Return - None
 */

void puts2(char *str)
{
	int i, j, len;

	len = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
