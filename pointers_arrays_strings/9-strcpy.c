#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies string from
 * an array to another array
 * @dest: destination
 * @src: pointer holding a string
 * Return: Always 0;
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
