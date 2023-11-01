#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string to be concatenated with another.
 * @s2: Second string to be concatenated with the other.
 * Return: The newly concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, x, total_len;
	char *concat;

	i = 0;
	j = 0;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	total_len = i + j;

	if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}
	concat = malloc((total_len * sizeof(char)) + 1);

	x = 0;

	while (x < total_len)
	{
		if ((x >= 0) && (x < i))
		{
			concat[x] = s1[x];
		}
		else if ((x >= i) && (x < total_len))
			concat[x] = s2[x - i];

		x++;
	}

	concat[x] = '\0';

	return (concat);
}
