#include "main.h"


/**
 * _strchr - A function that locates a character in a string
 * @s: The array from which to search the character
 * @c: The character to be located
 * Return: The first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}

		j++;
	}

	return ('\0');
}
