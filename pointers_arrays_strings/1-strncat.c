#include <stdio.h>
#include "main.h"

/**
 * *_strncat - function that
 * concatenates 2 strings
 * with a limit of n bytes
 * @dest: pointer to
 * destination of string
 * @src: pointer to character
 * src
 * @n: bytes
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	{
		dest[i] = '\0';
	}
	return (dest);
}
