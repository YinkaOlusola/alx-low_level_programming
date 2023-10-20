#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string
 * @s2: Second string to compare with the first string.
 * Return: 0 if the strings are the same, negative if first
 *	string is greater than second string, positive otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	int k, result;

	k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			result = s1[k] - s2[k];
			break;
		}
		else
		{
			k++;
			continue;
		}



	}
	if (s1[k] == '\0' || s2[k] == '\0')
	{
		result =  s1[k] - s2[k];
	}

	return (result);

}
