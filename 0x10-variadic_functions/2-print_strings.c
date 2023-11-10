#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Prints all input arguements
 * followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of arguments passed into the function.
 *
 * Return: Nothing.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *currentArg;
	va_list args;

	va_start(args, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			currentArg = va_arg(args, char*);
			printf("%s", (currentArg ? currentArg : "(nil)"));

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
