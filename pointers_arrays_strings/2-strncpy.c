#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copies 2 strings
 * @dest: pointer to destination
 * @src: pointer to string
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int copy = 0;

	while (i < n)
	{
		if (src[i] != '\0')
		{
			copy = 1;
		}
		if (copy)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
