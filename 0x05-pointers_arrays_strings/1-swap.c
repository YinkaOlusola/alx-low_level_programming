#include "main.h"

/**
 * swap_int - A function to swap the values of two inputs
 * @a: First input to change the second input to.
 * @b: Second input to change the first input to.
 * Return: No return.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
