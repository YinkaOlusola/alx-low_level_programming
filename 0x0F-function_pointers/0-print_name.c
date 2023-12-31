#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - A function to print a name.
 * @name: The name to be printed.
 * @f: The function to do the printing
 *
 * Return: Nothing.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
