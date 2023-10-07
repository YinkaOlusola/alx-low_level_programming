#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * This program prints the letter of the alphabet in lower case.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
