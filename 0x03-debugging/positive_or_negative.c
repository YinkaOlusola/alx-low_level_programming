#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * positive_or_negative - Entry point
 *
 * This functin checks whether a number is positive, negative or zero.
 *
 * Return: 0 (Success)
 */
void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
