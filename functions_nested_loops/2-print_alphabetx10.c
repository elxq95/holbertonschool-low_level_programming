#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - This is a program
 * that prints lowercase letters x10
 * Return : Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10 ; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
