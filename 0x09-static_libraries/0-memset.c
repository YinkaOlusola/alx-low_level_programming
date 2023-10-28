#include "main.h"

/**
 * _memset - A function to fill the memory with a constant byte
 * @s: The array of the memory area
 * @b: The constatnt byte to fill the memory area with
 * @n: Number of bytes of the memory area to be filled.
 * Return: The array s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}

	return (s);
}
