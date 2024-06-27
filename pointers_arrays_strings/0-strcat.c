#include <stdio.h>
#include "main.h"

/**
 * *_strcat - function that
 * concatenates two strings
 * @dest: pointer to destination
 * @src: pointer to string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (src[i] != '\0' && dest[i] != '\0')
	{

		dest[j] = src[i] + dest[i]
		i++;
	}
	
	dest[j] = '\0';
	return (dest[j]);
}
