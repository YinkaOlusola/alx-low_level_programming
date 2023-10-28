#include "main.h"

/**
 * _isdigit - Function to check for a digit
 *
 * @c: Theinput to be checked
 *
 * Return: 1 if it is digit and 0 if it is not
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
