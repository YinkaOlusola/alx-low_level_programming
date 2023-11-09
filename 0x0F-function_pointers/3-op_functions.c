#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 * op_add - Add two numbers.
 * @a: First input.
 * @b: Second input.
 *
 * Return: Integer sum of a and b.
 *
 */


int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract one number from the other.
 * @a: First input.
 * @b: Second input.
 *
 * Return: Integer difference of a and b.
 *
 */


int op_sub(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}


/**
 * op_mul - Multiplies two numbers.
 * @a: First input.
 * @b: Second input.
 *
 * Return: Integer multiplication of a and b.
 *
 */


int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divide one number by the other.
 * @a: First input - Dividen.
 * @b: Second input - Divisor.
 *
 * Return: Integer quotient of a and b.
 *
 */


int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
		return (0);
	}
	else
		return (a / b);
}



/**
 * op_add - Performs modulus operation between two numbers.
 * @a: First input.
 * @b: Second input.
 *
 * Return: Integer modulus of one number by another number.
 *
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
		return (0);
	}
	else
		return (a % b);
}
