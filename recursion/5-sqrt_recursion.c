#include <stdio.h>
#include "main.h"
/**
 * _sqrt_helper - check the code
 * @n: number after subtraction
 * @s: the amount to subtract
 *
 * Return: subtraction result
 */

int _sqrt_helper(int n, int s)
{
	int step = 0;
	int result = 0;

	if ((n - s) > 0)
	{
		result = _sqrt_helper(n - s, s + 2);

		if (result != -1)
		{
			step = result + 1;
		}
		else
		{
			step = -1;
		}
	}

	if ((n - s) == 0)
	{
		step = 1;
	}

	if ((n - s) < 0)
	{
		step = -1;
	}
	return (step);
}

/**
 * _sqrt_recursion - function that
 * returns the natrual square root of a number
 * @n: integer
 * Return: check the code
 */

int _sqrt_recursion(int n)
{

	int result = -1;

	if (n > 0)
	{
		result = _sqrt_helper(n, 1);
	}

	return (result);
}
