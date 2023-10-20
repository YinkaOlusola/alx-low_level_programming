#include "main.h"

/**
 * cap_string - Capitalize every word
 * @str: The string whose words are to be capitalized
 * Return: The converted string
 */

char *cap_string(char *str)
{
	int i, j, k;

	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	k = 13;

	while (str[i])
	{
		j = 0;

		while (j < k)
		{
			if ((i == 0 || str[i - 1] == spc[j]) && (str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;

			j++;
		}

		i++;
	}

	return (str);
}
