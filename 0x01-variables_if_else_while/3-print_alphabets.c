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
	char uppercase;

	lowercase = 'a';
	uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
