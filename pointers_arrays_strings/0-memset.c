#include <stdio.h>
#include "main.h"

/**
 * *_memset - function that
 * fills memory with a constant byte
 * @s:pointer to a string
 * @b:a string
 * @n:
 * Return: check the code
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
