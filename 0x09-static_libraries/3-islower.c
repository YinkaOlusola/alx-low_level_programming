#include "main.h"

/**
 * _islower - Entry point
 *
 * This program checks whether a letter is lower case.
 *
 * @c: the character to be checked if it's a lowercase
 *
 * Return: 0 if it's not lowercase and 1 if it's lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{	return (1);
	}

	else
	{
		return (0);
	}
}
