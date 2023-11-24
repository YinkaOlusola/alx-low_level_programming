#include "main.h"


/**
 * set_bit - Set the value of a bit to 1 at a given index.
 * @n: Input binary.
 * @index: Index of input to be changed.
 *
 * Return: 1 if success and -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
