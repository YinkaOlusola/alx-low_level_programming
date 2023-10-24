#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals
 * @a: The array whose diagonals are t be summed.
 * @size: Size of the aray.
 */

void print_diagsums(int *a, int size)
{
	int i, sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[(size + 1) * i];
		sum_2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum_1, sum_2);
}
