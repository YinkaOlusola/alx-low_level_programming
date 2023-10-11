#include "main.h"
#include <ctype.h>

/**
 * _abs - A function that returns the absolute value of the input
 *
 * @n: A parameter to check if it's letter
 *
 * Return: The absolute value of the inpyt argument
 */

int _abs(int n)
{
	int output;

	if (n < 0)
	{
		output = 0 - n;
	}
	else
	{
		output = n;
	}

	return (output);
}
