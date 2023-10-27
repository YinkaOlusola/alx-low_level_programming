#include "main.h"

int _sqrt_check(int num, int i);

/**
 * _sqrt_recursion - A function to find the natural square root of a number.
 * @n: The number whose square rroot is to be found.
 * Return: Returns the square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_check(n, 0));
}


/**
 * _sqrt_check - Calculates if the square of a number is equal to given number.
 * @num: Number whose square root is to be found.
 * @i: Number to check if its square is equal to num.
 * Return: The resulting square root or -1 if not found.
 */

int _sqrt_check(int num, int i)
{
	int square;

	square = i * i;

	if (square > num)
	{
		return (-1);
	}
	if (square == num)
	{
		return (i);
	}

	return (_sqrt_check(num, i + 1));
}
