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
	int k;

	k = 0;


	while (s1[k] && s2[k])
	{
		if (s1[k] != s2[k])
		{
			if (s1[k] < s2[k])
			{
				return (-15);
			}
			else
			{
				return (15);
			}
		}
		else
		{
			if ((s1[k + 1] != '\0') && (s2[k + 1] != '\0'))
			{
				k++;
				continue;
			}
			else
			{
				return (0);
			}
		}

	}

	return (0);

}
