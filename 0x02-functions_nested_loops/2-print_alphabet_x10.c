#include "main.h"


/**
 * print_alphabet_x10 - Entry point
 *
 * This program prints the letter of the alphabet in lower case 10 times.
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int count;

	count = 0;

	while (count < 10)
	{
		char alphabet;

		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
		count++;

	}

}
