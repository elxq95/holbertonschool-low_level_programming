#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function
 * that returns 1 if the input
 * integer is a prime number
 * @n: integer
 * Return: 1 if the integer is
 * a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_helper(n, 2));
}

/**
 * prime_helper - subfunction
 * @n: integer
 * @s: integer to subtract
 * Return: result
 */

int prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor  == 0)
	{
		return (0);
	}
	return (prime_helper(n, divisor + 1));
}
