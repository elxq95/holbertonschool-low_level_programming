#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that
 * allocates memory for an array,
 * using malloc
 * @nenmb: an array of integers
 * @size: size of the nmemb
 * Return: NULL if nmemb or size = 0
 * or if Malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;
	char *char_array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}

	char_array = (char *)array;
	for (i = 0; i < (nmemb *size); i++)
	{
		char_array[i] = 0;
	}

	return (array);
}
