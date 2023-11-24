#include "main.h"

/**
 * get_bit - Returns the value of a bit.
 * @n: Given number
 * @index: Given index.
 *
 * Return: Value of the bit at the index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (n)
	{
		if (i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;

		i++;
	}

	if (index > i && index < 63)
		return (0);

	return (-1);
}
