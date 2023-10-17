#include "main.h"

/**
 * puts_half - Prints the second half of the input string
 * @str: The string whose input is to be printed
 * Return: None
 */

void puts_half(char *str)
{
	int i, j, init, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		init = len / 2;
	}
	else
	{
		init = (len + 1) / 2;
	}
	for (j = init; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
