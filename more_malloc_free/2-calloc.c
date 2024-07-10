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
	unsigned int *array;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	
	size = sizeof(size);
	if (sizeof(size) == 0)
        {
               return (NULL);
        }
	
	array = malloc(nmemb * sizeof(unsigned int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	if (array[i] == 0)
	{
		return (NULL);
	}

	return (array);
}
