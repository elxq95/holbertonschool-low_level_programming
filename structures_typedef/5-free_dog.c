#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - this is 
 * a function that frees
 * dog_t
 * @d: dog to be freed
 * Return: Always 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
