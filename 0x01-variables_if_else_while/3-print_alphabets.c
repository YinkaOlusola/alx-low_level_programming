#include <stdio.h>


/**
 * main - Entry point
 *
 * This program prints the upper- and lowercase letter of the English alphabet.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowercase;

	lowercase = 'a';

/*	char uppercase = 'A';*/

	while (lowercase >= 'Z')
	{
		putchar(lowercase);
		lowercase--; }

	putchar('\n');

	return (0);
}
