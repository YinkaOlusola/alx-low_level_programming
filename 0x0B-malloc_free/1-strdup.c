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
	unsigned int j;
	char *strcpy;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	strcpy = malloc((sizeof(char) * i) + 1);

	if (strcpy == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		strcpy[j] = str[j];
		j++;
	}

	strcpy[j] = '\0';

	return (strcpy);
}
