#include "function_pointers.h"


/**
 * array_iterator - Executes a function given as a
 * parameter on each element of an array
 * @array: Array to execute function on.
 * @size: Size of array.
 * @action: Function whose action is to be performed on element of the array.
 *
 * Return: Nothing.
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

