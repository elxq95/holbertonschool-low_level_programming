#include <stdio.h>
#include "main.h"

/**
 * *cap_string - function
 * that capitalizes all words of a string
 * @str: pointer to a string
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;
	int convert = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}')
	{
		convert = 1;
	}
		else if (convert && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			convert = 0;
		}
		else if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}
