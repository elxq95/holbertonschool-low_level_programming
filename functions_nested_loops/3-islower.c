#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - This is a program that
 * uses a function to check for
 * lowercase character.
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
