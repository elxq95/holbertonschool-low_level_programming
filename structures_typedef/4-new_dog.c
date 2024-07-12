#include <stdio.h>
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
 * _strcopy - Copies a string to a destination buffer
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
	return dest;
}
/**
 * new_dog - check the code
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
		return (NULL);
	}
	_strcpy(new_name, name);

	new_owner = malloc(_strlength(owner) + 1);
	{
		return (NULL);
	}
	_strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
