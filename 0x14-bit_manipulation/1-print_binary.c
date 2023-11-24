#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Input integer.
 *
 * Return: None.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	binary_division(n);
}

void binary_division(unsigned long int n)
{
	if (n < 1)
		return;

	binary_division(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
