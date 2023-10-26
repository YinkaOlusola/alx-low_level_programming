#include "main.h"

/**
 * factorial - A function to find the factorial of a number.
 * @n: The number whose factorial is to be found.
 * Return: The factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
