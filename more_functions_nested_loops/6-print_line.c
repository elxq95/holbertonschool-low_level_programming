#include <stdio.h>
#include "main.h"

/**
 * print_line - check the code
 * @n: check the code
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
