#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the letters of theEnglish alphabet except q an e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');

	return (0);
}
