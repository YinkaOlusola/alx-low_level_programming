#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: The array to reverse
 * @n: Number of integersin the array.
 * Return: No return
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;

		n--;
	}
}
