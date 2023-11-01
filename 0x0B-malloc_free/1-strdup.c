#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory, which contains a
 * copy of the string given as a parameter.
 * @str: The string that is to be copied to a new allocated memory
 * Return: Created copy of the string.
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len;
	unsigned int j;
	char *strcpy;

	if (str == NULL)
	{
		return (NULL);
	}
	
	i = 0;
	len = 0;

	while (str[i])
	{
		len++;
		i++;
	}

	strcpy = malloc(len * sizeof(str));

	if (strcpy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len; j++)
	{
		strcpy[j] = str[j];
	}

	return (strcpy);
}


