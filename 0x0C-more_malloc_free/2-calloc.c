#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Memory bytes of the array.
 * @size: Size in bytes of the array.
 * Return: A pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);

}
