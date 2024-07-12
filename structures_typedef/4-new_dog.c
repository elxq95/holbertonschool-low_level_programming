#include <stdio.h>
#include <string.h>
#include "dog.h"
#include<stdlib.h>

/**
 * _strlength - Calculates the length of a tring
 * @s: The string
 * Return: Length of the string
 */

int _strlength(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}

/**
 * new_dog - function
 * that creates a new dog
 * @name: name of dog
 * @age: age
 * @owner: owner
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(_strlength(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(_strlength(owner) + 1);
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
