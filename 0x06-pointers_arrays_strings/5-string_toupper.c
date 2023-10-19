#include "main.h"

/**
 * string_toupper - Conversts all lowercase of a string to uppercase
 * @input_str: The input string to be converted
 * Return: The uppercase string
 */

char *string_toupper(char *input_str)
{
	int i;
	char tmp;

	for (i = 0; input_str[i] != '\0'; i++)
	{
		if (input_str[i] >= 'a' && input_str[i] <= 'z')
		{
			tmp = input_str[i] - 32;
			input_str[i] = tmp;
		}
		else
		{
			continue;
		}
	}

	return (input_str);
}
