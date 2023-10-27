#include "main.h"

int _strlen_recursion(char *s);
int check_for_palindrome(char *s);


/**
 * is_palindrome - Checks if an input string is a palindrome.
 * @s: The input string to check if it's a palindrome.
 * Return: 1 if it's a palindrome and 0 if otherwise.
 */


int is_palindrome(char *s)
{
	if (*s == '0')
	{
		return (1);
	}

	return (check_for_palindrome(s));
}


/**
 * check_for_palindrome - Recursively checks if a string is a palindrome.
 * @s: The string to be checked if it's a palindrome.
 * Return: 1 If s is a palindrome and 0 otherwise.
 */

int check_for_palindrome(char *s)
{
	int len_of_s;

	len_of_s = _strlen_recursion(s) - 1;

	if (*s == s[len_of_s])
	{
		s++;
		len_of_s--;
	}
	else
	{
		return (0);
	}

	return (1);
}


/**
 * _strlen_recursion - Length of a string using recursion.
 * @s: The string whose length is tobe found
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	len = 1 + _strlen_recursion(s);

	return (len);
}
