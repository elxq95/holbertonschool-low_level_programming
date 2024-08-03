#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that
 * converts binary number (given as a string)
 * to an unsigned int
 * @b: constant character
 * Return: the converted number, or 0 if there
 * is one or more chars in the string b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
