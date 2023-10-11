#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * This program prints the letter of the alphabet in lower case.
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');

	return;

}
