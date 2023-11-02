#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates a Memory using malloc
 * @b: The input
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b + 1);

	if (ptr == NULL)
	{
		exit (0);
	}

	return (ptr);
}
