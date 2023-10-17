#include "main.h"

/**
 * puts2 - Prints every other character starting witht the first character
 * @str: The string from which every other character is to be printed
 * Return - None
 */

void puts2(char *str)
{
	int i, len;

	len =  _strlen(str);

	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
