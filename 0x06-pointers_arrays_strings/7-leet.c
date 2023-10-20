#include "main.h"

/**
 * leet - Encodes a string into 1337 according to some rules
 * @str: - The input string to be encoded
 * Return: Encoded string
 */

char *leet(char *str)
{
	int i, j, length;

	char act_char[5] = {'A', 'E', 'O', 'T', 'L'};
	char rep_char[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	length = 5;

	while (str[i])
	{
		j = 0;

		while (j < length)
		{
			if (str[i] == act_char[j] || str[i] - 32 == act_char[j])
			{
				str[i] = rep_char[j];
			}

			j++;
		}

		i++;
	}

	return (str);
}
