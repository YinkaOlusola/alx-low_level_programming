#include "main.h"

/**
 * print_line - Prints a straight line on the terminal
 * @n: The length of the line to be printed
 * Return: No return
 *
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
