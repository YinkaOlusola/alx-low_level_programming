#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all the numbers in base 16
 *
 * Return: 0(success)
 *
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 16; digit++)
	{
		if (digit > 9)
		{
			putchar(digit + 'W');
		}
		else
		{
			putchar(digit + '0');
		}

	}

	putchar('\n');

	return (0);
}
