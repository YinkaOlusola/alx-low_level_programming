#include "main.h"

/**
 * _pow_recursion - A function to calculate the power of a number
 * @x: Base raised to a certain power.
 * @y: Exponent or power to which the number is raised.
 * Return: The power of the number raised to another number.
 */

int _pow_recursion(int x, int y)
{
	int pow;
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	y--;
	pow = x * _pow_recursion(x, y);

	return (pow);
}
