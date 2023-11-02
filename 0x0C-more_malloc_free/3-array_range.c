#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * array_range - Creates an array of integers.
 * @min: Lowest value of the array.
 * @max: Highest value of the array.
 * Return: A pointer to the created.
 */

int *array_range(int min, int max)
{
	int i = 0, j;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * 1);

	if (ptr == NULL)
		return (NULL);

	ptr[i] = min;

	i++;

	j = max + 1;

	while (i < j)
	{
		ptr = (int*)realloc(ptr, (i + 1) * sizeof(int));
		ptr[i] = min + i;

		i++;
	}

	return (ptr);
}
