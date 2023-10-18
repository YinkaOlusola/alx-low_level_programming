#include "main.h"


/**
 * _strcat - Concatenates two strings
 * @dest: The string to hold the two concatenated strings
 * @src: The string to be concatenated with the other
 * Return: The concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len_dest, sum;

	len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		sum = j + len_dest;
		dest[sum] = src[j];
	}

	return (dest);
}
