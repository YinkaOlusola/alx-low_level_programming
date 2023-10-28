#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: The array to be searched.
 * @accept: The string to search for.
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}

			j++;
		}

		i++;
	}

	return ('\0');
}
