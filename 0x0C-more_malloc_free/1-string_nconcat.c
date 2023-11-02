#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings based on some conditions.
 * @s1: First string to add another string to.
 * @s2: The string to concatenate with the first string.
 * @n: Number of bytes from s2 to concatenate with s1
 * Return: A string containing s1 and a portion of s2 or all of s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, total_len, k;
	char *ptr;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (n >= j)
		total_len = i + j;
	else
		total_len = i + n;

	ptr = malloc((total_len * sizeof(char)) + 1);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < total_len; k++)
	{
		if (k < i)
			ptr[k] = s1[k];

		else if ((k >= i) && (k < total_len))
			ptr[k] = s2[k - j];
	}

	ptr[k] = '\0';
	return (ptr);
}
