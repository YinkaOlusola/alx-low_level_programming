#include "main.h"
#include <ctype.h>

/**
 * print_sign - A program that checks for sign of a number
 *
 * @n: A parameter to check if it's letter
 *
 * Return: 0 if it's not a letter and 1 if it's a letter
 */

int print_sign(int n)
{
	if (n !=  0)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
