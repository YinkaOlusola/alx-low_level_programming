#include "main.h"

/**
 * _puts_recursion - Prints a string without using a loop
 * @s: The string to be printed.
 * Return: No return
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}
