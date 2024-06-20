#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * _abs - check the code
 * @n: check the code
 * Return: 0 (Success)
 */
int _abs(int n)
{
	if (abs(n) > 0)
	{
		return (n);
	}
	else if (abs(n) < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
