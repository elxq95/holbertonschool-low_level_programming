#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the
 * last digit of a number
 * @n: the number
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	return (last_digit);
}
