#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - function that
 * searches a string for any
 * of a set of bytes
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: &s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int findchar = 1;
	int foundchar = 0;

	while (s[i] != '\0' && findchar == 1)
	{
		j = 0;
		foundchar = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				foundchar = 1;
				findchar = 0;
				break;
			}
			j++;
		}
		if (foundchar == 1)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
