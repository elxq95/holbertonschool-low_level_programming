#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that
 * creates an array of integers
 * @min: integer
 * @max: integer
 * Return: the pointer to the newly created
 * array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(unsigned int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
