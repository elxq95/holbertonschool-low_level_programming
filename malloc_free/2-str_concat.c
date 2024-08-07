#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that
 * concatenates two strings.
 * @s1:pointer to string 1
 * @s2: pointer to string 2
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j, length1, length2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (length1 = 0; s1[length1] != '\0'; length1++)
	{
	}
	for (length2 = 0; s2[length2] != '\0'; length2++)
	{
	}

	concat_str = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		concat_str[i] = s1[i];
	}

	for (j = 0; j < length2; j++)
	{
		concat_str[i + j] = s2[j];
	}

	concat_str[i + j] = '\0';

	return (concat_str);
}
