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
	unsigned int i;

	i = 0;
	str = (char *)malloc(i * sizeof(char));

	while (str != NULL)
	{
		i++;
		return (str);
	}
	if (str == NULL)
	{
		return (0);
	}
}
