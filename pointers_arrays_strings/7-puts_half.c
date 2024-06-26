#include <stdio.h>
#include "main.h"

/**
 * puts_half - print the second
 * half of the string
 * @str: pointer to the first
 * character of the string
 * Return: Void
 */

void puts_half(char *str)
{
	int length = 0;
	int i, n;

	while (str[length] != 0)
	{
		length++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2 + 1;
	}
	
	i = n;
	
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
