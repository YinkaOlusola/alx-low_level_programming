#include "main.h"

/**
 * _strlen_recursion - Length of a string using recursion.
 * @s: The string whose length is tobe found
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	len = 1 + _strlen_recursion(s);

	return (len);
}
