#include "main.h"

/**
 * _strcpy - Copy one string from one place to another
 * @dest: Where the string is to be copied to.
 * @src: Where the string is to copied from
 * Return: Returns a char.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, len;

	len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j <= len; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
