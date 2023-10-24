#include "main.h"


/**
 * _strchr - A function that locates a character in a string
 * @s: The array from which to search the character
 * @c: The character to be located
 * Return: The first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	char result[];

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = s[i];
			break;
		}
		else
		{
			result = '\0';
		}

		i++;
	}

	return (result);
}
