#include <stdlib.h>
#include "dog.h"

/**
 * _strlength - Calculates the length of a string
 * @s: The string
 * 
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
 * _strcpy - Copies a string to a destination buffer
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	/* Allocate memory for the new dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for name and copy it */
	new_name = malloc(_strlength(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_name, name);

	/* Allocate memory for owner and copy it */
	new_owner = malloc(_strlength(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_owner, owner);

	/* Initialize the new dog's members */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
