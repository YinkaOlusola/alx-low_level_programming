#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all single digits separated by comma and space
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{

		putchar(digit + '0');
		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
