#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to check from
 * @accept: The substring
 * Return: Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	k = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				k++;
			}

			j++;
		}

		i++;
	}

	return (k);
}
