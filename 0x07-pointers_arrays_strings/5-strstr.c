#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @needle: The string to be found.
 * @haystack: The string to be searched.
 * Return: A pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;

	}

	return ('\0');
}
