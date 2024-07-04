#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - function that
 * returns the natrual square root of a number
 * @n: integer
 * Return: check the code
 */

int _sqrt_helper(int n, int step, int sub)
{
	if (n - sub < 0)
	{
		return (-1);
	}
	if (n - sub == 0)
	{
		return (step);
	}
	_sqrt_helper((n - sub, step + 1, sub + 2));
}

int _sqrt(int num)
{
	return (_sqrt_rec(num, 1, 1));
}
