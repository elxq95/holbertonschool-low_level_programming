#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print
 * @n: number of times the character
 * \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int s;

	for (n = 0; n > 0; n++)
	{
		{
			for (s = 0; s > 0; s++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		}
		_putchar('\n');
	}
}
