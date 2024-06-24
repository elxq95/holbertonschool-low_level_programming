#include <stdio.h>
#include "main.h"

/**
 * print_line - check the code
 * @n: check the code
 * Return: Always 0
 */

void print_line(int n)
{
	char a = '_';

	if (n > 0)
	{
		_putchar(a * n);
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
