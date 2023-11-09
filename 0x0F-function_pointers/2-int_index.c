#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an element.
 * @array: Array to search for the element from.
 * @size: Size of the array.
 * @cmp: Function to use to compare the element being searched.
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0.
 *
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size != 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
