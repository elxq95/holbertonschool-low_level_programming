#include <stdio.h>
#include "main.h"

/**
 * _strspn - function that gets the length
 * of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to string 
 * for the number of bytes
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = accept[i];
		i++;
	}
	return (&s[i]);
}
