#include "main.h"
#include <ctype.h>

/**
 * _isalpha - A program that checks for letter
 *
 * @c: A parameter to check if it's letter
 *
 * Return: 0 if it's not a letter and 1 if it's a letter
 */

int _isalpha(int c)
{
	int a;

	a = isalpha(c);

	if (a != 0)
	{
		a = 1;
	}

	return (a);
}
