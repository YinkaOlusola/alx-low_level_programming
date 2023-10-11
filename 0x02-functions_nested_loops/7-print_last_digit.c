#include "main.h"

/**
 * print_last_digit - A program that prints the last digit of an input
 *
 * @n: A number to print it's last digit
 *
 * Return: 0 and prints the last digit of an input
 */

int print_last_digit(int n)
{
	int output;

	if (n >= 0)
	{
		output = n % 10;
	}
	else
	{
		output = 0 - (n % 10);

	}

	_putchar(output + '0');
	return (output);
}
