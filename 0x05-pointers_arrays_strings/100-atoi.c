#include "main.h"

/**
 * _atoi - Converts a string to a function
 * @s: The string tobe converted to an integer
 * Return: The integer equivalent of t string
 */

int _atoi(char *s)
{
	int i, j, k;
	unsigned int x = 0;

	i= 0;
	j = 1;
	k = 0;
	x = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			j *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			k = 1;
			x = (x * 10) + (s[i] - '0');
			i++;
		}

		if (k == 1)
		{
			break;
		}

		i++;
	}

	x *= j;
	return (x);
}
