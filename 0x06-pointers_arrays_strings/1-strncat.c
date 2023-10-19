#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n
 *		bytes from the second string
 * @dest: First string to which the second string is to be concatenated.
 * @src: Second string that is to be concatenated to another string
 * @n: Number of bytes from the second string to be concatenated.
 * Return: Returns the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len_dest, size_in_bytes;

	len_dest = 0;
	size_in_bytes = n / sizeof(char);

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}
	for (j = 0; j < size_in_bytes; j++)
	{
		if (src[j] != '\0')
		{
			dest[j + len_dest] = src[j];
		}
		else
		{
			break;
		}
	}

	return (dest);
}
