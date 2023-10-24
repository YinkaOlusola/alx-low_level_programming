#include "main.h"

/**
 * _memcpy - copies one memory area to another memory area
 * @dest: The array to copy to
 * @src: The memory to copy from
 * @n: Number of bytes to copy
 * Return: The dest array
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}

	return (dest);

}
