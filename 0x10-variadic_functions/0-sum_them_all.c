#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds all its parameters
 * @n: First input
 *
 * Return: Sum of all arguments passed into the function.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum, currentArg;
	va_list args;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		currentArg = va_arg(args, unsigned int);
		sum += currentArg;
	}
	va_end(args);

	return (sum);
}

