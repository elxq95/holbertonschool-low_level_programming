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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int counter = 0;
	int charfound = 0;
	int contloop = 1;

	while (s[i] != '\0' && contloop == 1)
	{
		j = 0;
		charfound = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				counter = counter + 1;
				charfound = 1;
			}
			j = j + 1;
		}
		if (charfound == 0)
		{
			contloop = 0;
		}
		i = i + 1;
	}
	return (counter);
}
