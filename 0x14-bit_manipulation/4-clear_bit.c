#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given point.
 * @n: The number in decimal.
 * @index: The index of the binary to set to 0.
 *
 * Return: 1 if it works, -1 if error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
