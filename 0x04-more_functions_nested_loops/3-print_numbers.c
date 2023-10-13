#include "main.h"

/**
 * print_numbers - Prins numbers from 0 to 9
 * @: No input arguement
 * Return: No return
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}

	_putchar('\n');
}
