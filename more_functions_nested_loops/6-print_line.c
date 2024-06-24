#include <stdio.h>
#include "main.h"

/**
 * print_line - check the code
 * @n: check the code
 * Return: Always 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar(95 * n);
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
