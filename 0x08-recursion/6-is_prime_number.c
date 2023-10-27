#include "main.h"

int check_prime(int num, int i);

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: Number to check if it is prime.
 * Return: 1 if n is prime and 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_prime(n, 1));
}

/**
 * check_prime - Recursively checks if a number is prime.
 * @num: The number whose prime is to be found.
 * @i: Iterator.
 * Return: 1 if num is a prime number and zero if otherwise.
 */

int check_prime(int num, int i)
{
	if (num % i == 0 && i > 1)
	{
		return (0);
	}
	if ((num / i) < i)
	{
		return (1);
	}

	return (check_prime(num, i + 1));
}
