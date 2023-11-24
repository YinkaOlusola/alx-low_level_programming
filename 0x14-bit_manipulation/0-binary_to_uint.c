#include "main.h"


/**
 * binary_to_unit - Converts a binary to an unisgned int
 * @b: The binary number to be converted
 *
 * Return: The converted number or 0.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int str_len, counter, sum;

	str_len = 0;
	counter = 0;
	sum = 0;

	if (b == NULL)
		return (0);

	while (b[str_len])
		str_len++;

	while (str_len--)
	{
		if (b[str_len] != 48 && b[str_len] != 49)
			return (0);

		if (b[str_len] == 49)
			sum += 1 << counter;

		counter++;
	}

	return (sum);
}
