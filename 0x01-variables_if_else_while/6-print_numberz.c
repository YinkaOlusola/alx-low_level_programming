#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all single digit between 0 and 10 in base 10 as char
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		/*char var = char(digit);*/

		putchar((char)digit);
	}

	putchar('\n');

	return (0);
}
