#include "main.h"

/**
 * _strncpy - Copies one string into another string variable
 * @dest: The string variable into which another string is copied.
 * @src: The string variable to be copied into another variable.
 * @n: The length of string to copy.
 * Return: Returns the newly copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, len_src;

	len_src = 0;

	for (j = 0; src[j] != '\0'; j++)
	{
		len_src++;
	}
	for (i = 0; i < n; i++)
	{
		if (i < len_src)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
