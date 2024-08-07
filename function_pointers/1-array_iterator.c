#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that
 * executes a function given as a
 * parameter on each element
 * of an array
 * @size: size of the array
 * @array: pointer to an array
 * @action: a function pointer that
 * points to a function which takes an integer as an argument
 * and returns void
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size == 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
