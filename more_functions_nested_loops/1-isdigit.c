#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks for digit
 * @c: integer
 * Return: 1 if c is a digit
 * 0 otherswise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}		
