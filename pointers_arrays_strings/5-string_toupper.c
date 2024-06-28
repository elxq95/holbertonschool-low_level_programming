#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - function that
 * changes all lowercase letters of a string
 * to uppercase
 * @str: pointer to a string
 * Return: upper
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
