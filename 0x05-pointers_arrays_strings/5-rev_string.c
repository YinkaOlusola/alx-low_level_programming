#include "main.h"

/**
 * rev_string - A function to reverse a string.
 * @s: A tring to be reversed.
 * Return: None
 */

void rev_string(char *s)
{
	int count, len, i;

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
