#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int len, count;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (count = 0; count < len; count++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (len == n - 1)
			{
				continue;
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
