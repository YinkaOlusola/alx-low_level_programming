#include <stdio.h>

/**
 * main - Finds and prints the largest prime factors of 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long i = 612852475143, j;

	while (j < (i / 2))
	{
		if ((i % 2) == 0)
		{
			i /= 2;
			continue;
		}

		for (j = 3; j < (i / 2); j += 2)
		{
			if ((i % j) == 0)
			{
				i /= j;
			}
		}
	}

	printf("%ld\n", i);

	return (0);
}
