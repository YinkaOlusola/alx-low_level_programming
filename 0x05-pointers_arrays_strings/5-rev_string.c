#include "main.h"

/**
 * rev_string - A function to reverse a string.
 * @s: A tring to be reversed.
 * Return: None
 */

void rev_string(char *s)
{
	int count, len, i, j;

	j = 0;
	len = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	for (i = len - 1; i > j; i--)
	{
		char tmp;

		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;

		j++;
	}
}
