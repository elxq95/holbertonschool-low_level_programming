#include <stdio.h>
#include "main.h"

/**
 * *_strchr - function that locates
 * a character in a string
 * @s: pointer to a string
 * @c: character c
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = 1;
			break;
		}
		i++;
	}
	if (s[i] == c)
	{
		found = 1;
	}
	if (found)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
