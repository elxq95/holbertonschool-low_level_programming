#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string
 * given as a parameter
 * @str: pointer to a string
 * Return: NULL if str = NULL
 * on success, the _strdup function
 * returns a pointer to the duplicated string, returns
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	unsigned int i, length;
	char *newstring;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != 0; length++);

	newstring = (char *)malloc((length +1) * sizeof(char));

	if (newstring  == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i ++)
	{
		newstring[i] = str[i];
	}

	newstring[length] = '\0';

	return (newstring);
}
