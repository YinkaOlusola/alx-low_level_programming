#include "main.h"

/**
 * _strlen - A fucntion that returns the length of a string
 * @s: The string whose length is to be returned
 * Return: Lenght of a string
 */

int _strlen(char *s)
{
	int length, i;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}
