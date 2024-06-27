#include <stdio.h>
#include "main.h"

/**
 * *strncpy - copies 2 strings
 * @dest: pointer to destination
 * @src: pointer to string
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int copy = 0;

	i < n;

	while (dest[i] != '\0' || src[i] != '\0')
	{
		if (dest[i] == '\0' && !copy)
		{
			copy = 1;
		}
		if (copy)
		{
			dest[i] = src[i];
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

