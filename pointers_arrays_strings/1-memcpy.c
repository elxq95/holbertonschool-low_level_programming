#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - function that
 * copies memory area
 * @dest: pointer to destination
 * @src: pointer to string
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;


	while (i < n)
	{
		while (src[i] != '\0')
		{
			for (j = 0; j > 0; j++)
			{
				dest[j] = src[i];
			}
			dest[j] = '\0';
			i++;
		}
	}
	return (dest);
}
