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
	int i, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(sizeof(int) * (size));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
