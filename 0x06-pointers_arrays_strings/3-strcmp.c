#include "main.h"

/** _strcmp - Compares two strings.
 * @s1: First string
 * @s2: Second string to compare with the first string.
 * Return 0 if the strings are different and 1 otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k, len_s1, len_s2, loop_len;
	
	k = 0;
	len_s1 = 0;
	len_s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len_s2++;
	}
	if (len_s1 < len_s2)
	{
		loop_len = len_s1;
	}
	else
	{
		loop_len = len_s2;
	}


	while (s1[k] != '\0' && s2[k] != '\0')
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
			if (k < loop_len - 1)
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
