#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numerical
 * values to 98 only
 * @n: value
 */
void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		if (n >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else	
		{
			_putchar('\n');
		}
	}
}
