#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - checks for alphabets
 * @c: the character to check
 * Return: 1 (if c is a letter,
 * lowercase or uppercase
 * 0 if otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
