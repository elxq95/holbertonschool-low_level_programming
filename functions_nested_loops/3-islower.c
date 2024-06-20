#include "main.h"
#include <stdio.h>
/**
 * main - This is a program that
 * uses a function to check for
 * lowercase character.
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	char a = 'c';
	if (islower(a))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
