#include <stdio.h>
#include "dog.h"

/**
 * print_dog 0 function that prints
 * a struct dog
 * Return: Check the code
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}

	else
	{

	if (d->name == NULL)
	{
		printf("Name:(nil)\n");
	}
	else
	{
		printf("Name:%s\n", d->name);
	}
	
	printf("Name:%f\n", d->age);
	
	if (d->owner == NULL)
	{
		printf("Owner:(nil)\n");
	}
	else
	{
		printf("Owner:%s\n", d->owner);
	}
	}
}
