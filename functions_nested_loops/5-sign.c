#include "main.h"
#include <stdio.h>
/**
 * print_sign - check the code
 * @n: check the code
 * Return: 1 check the code
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		{
			return (1);
		}
	}
	else if (n == 0)
	{
		_putchar('0');
		{
			return (0);
		}
	}
	else
	{
		_putchar('-');
		{
			return (-1);
		}
	}
}
