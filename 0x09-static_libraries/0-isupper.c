#include "main.h"

/**
 * _isupper - checks whether an input is uppercase or lowercase
 *
 * @c: the input to be checked
 *
 * Return: 1 - if it is uppercase and 0 if it is lowercase
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
