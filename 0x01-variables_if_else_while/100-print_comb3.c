#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints possible combinationo of two digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int digit1, digit2, low_bound;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		low_bound = digit1 + 1;
		for (digit2 = low_bound; digit2 < 10; digit2++)
		{
			if (digit1 != digit2)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				if (digit1 < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
